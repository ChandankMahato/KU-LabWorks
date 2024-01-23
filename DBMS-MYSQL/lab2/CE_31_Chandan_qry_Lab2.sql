CREATE DATABASE LAB2;
use LAB2;

-- Lab 2 Question Solved here

-- 1 Find the name of all published books.
SELECT Title FROM book;

-- 2 Find the name of all books published before 2000.
SELECT Title, Published_Date FROM book WHERE Published_Date < '2000-01-01';

-- 3 Get the details of the books written by a particular author.
SELECT * FROM book WHERE Auth_ID
IN (SELECT ID FROM author WHERE Auth_Name = 'Sadhguru');

SELECT * FROM book WHERE Auth_ID
IN (SELECT ID FROM author WHERE Auth_Name = 'Kahlil Gibran');

-- 4 Find the name of all weekly publications
SELECT Title, Published_Date FROM book WHERE Published_Date > '2022-02-07';

-- 5 Find the pre-ordered books
SELECT distributor.Dist_Name, distributor.Phone, 
		book.Title, order_items.Quantity, 
		order_items.Total_Amount,
		order_items.Ordered_Date, order_items.Discount
FROM
order_items
INNER JOIN
book_order
ON order_items.Order_ID = book_order.ID
INNER JOIN
book
ON order_items.Book_ID = book.ID
INNER JOIN
distributor
ON book_order.Dist_ID = distributor.ID;

-- 6 Get the details of all publications with the name starting with an 'A'
SELECT * FROM book WHERE Title LIKE 'A%';

-- 7 Find all the orders for a particular book. 
-- 	The result must be sorted based on the order date
 SELECT distributor.Dist_Name, distributor.Phone, 
		book.Title, order_items.Quantity, 
		order_items.Total_Amount,
		order_items.Ordered_Date, order_items.Discount
FROM
order_items
INNER JOIN
book_order
ON order_items.Order_ID = book_order.ID
INNER JOIN
distributor
ON book_order.Dist_ID = distributor.ID
INNER JOIN
book
ON order_items.Book_ID = book.ID
WHERE order_items.Book_ID = (SELECT ID FROM book WHERE Title = "Karma: A Yogi's Guide to Crafting Your Destiny")
ORDER BY order_items.Ordered_date DESC;

-- ------
 SELECT distributor.Dist_Name, distributor.Phone, 
		book.Title, order_items.Quantity, 
		order_items.Total_Amount,
		order_items.Ordered_Date, order_items.Discount
FROM
order_items
INNER JOIN
book_order
ON order_items.Order_ID = book_order.ID
INNER JOIN
distributor
ON book_order.Dist_ID = distributor.ID
INNER JOIN
book
ON order_items.Book_ID = book.ID
WHERE order_items.Book_ID = (SELECT ID FROM book WHERE Title = 'Living Dangerously')
ORDER BY order_items.Ordered_date ASC;
-- -----
-- ON order_items.Order_ID = (SELECT Order_ID FROM order_items WHERE Book_ID IN(SELECT ID FROM book WHERE Title = "Karma: A Yogi's Guide to Crafting Your Destiny"))




CREATE TABLE author(
	ID int,
    Auth_Name VARCHAR(20) NOT NULL,
    Nationality VARCHAR(20) NOT NULL,
    Date_of_birth DATE NOT NULL,
    Gender CHAR NOT NULL,
    Qualification VARCHAR(50) NOT NULL,
    primary key(ID)
);

ALTER TABLE author ADD Phone NUMERIC;
ALTER TABLE author MODIFY COLUMN Gender CHAR(6);

CREATE TABLE book(
	ID int,
    Title VARCHAR(50) Not NULL,
    No_of_Prints int Not NULL,
    Print_Date DATE Not NULL,
    No_of_Page int,
    Published_Date DATE Not NULL,
    Edition CHAR NOT NULL,
    Price int NOT NULL,
    Auth_ID int,
    primary key(ID),
    foreign key(AUTH_ID) REFERENCES author(ID)
);

ALTER TABLE book MODIFY COLUMN Edition CHAR(6);

CREATE TABLE language(
	English bool Not NULL,
    Nepali bool Not NULL,
    Hindi bool Not NULL,
    Book_ID int,
    foreign key(Book_ID) REFERENCES book(ID)
);

CREATE TABLE print(
	ID int Not NULL,
    Print_num int Not NULL,
    Book_ID int,
    primary key(ID),
    foreign key(Book_ID) REFERENCES book(ID)
);


CREATE TABLE distributor(
	ID int Not NULL,
    Location VARCHAR(50) Not NULL,
    dist_Name VARCHAR(50) Not NULL,
    Pan int Not NULL,
    Book_ID int, 
    primary key(ID),
    foreign key(Book_ID) REFERENCES book(ID)
);

ALTER TABLE distributor ADD Phone NUMERIC;

CREATE TABLE book_Items(
	Book_Name VARCHAR(50) Not NULL,
    Dist_ID int,
    Quantity int,
    foreign key(Dist_ID) REFERENCES distributor(ID)
);

CREATE TABLE book_order(
	ID int Not NULL,
    Dist_ID int,
    primary key(ID),
    foreign key(Dist_ID) REFERENCES distributor(ID)
);

ALTER TABLE book_order
MODIFY COLUMN Discount int;

CREATE TABLE order_items(
    Order_ID int,
    BOOK_ID int,
    Quantity int Not NULL,
	Discount int Not NULL,
    Total_Amount int Not NULL,
	Ordered_Date Date Not NULL,
    foreign key(Order_ID) REFERENCES book_order(ID),
    foreign key(Book_ID) REFERENCES book(ID)
);


CREATE TABLE sale(
	ID int Not NULL,
    Customer VARCHAR(50) Not NULL,
    Sales_Amount int Not NULL,
    Dist_ID int,
    primary key(ID),
    foreign key(Dist_ID) REFERENCES distributor(ID)
);

CREATE TABLE sales_items(
	Book_Name VARCHAR(50) Not NULL,
    Sales_ID int,
    foreign key(Sales_ID) REFERENCES sale(ID)
);

CREATE TABLE book_transaction(
	ID int Not NULL,
    Total_Payment int Not NULL,
    Tax int Not NULL,
    Trans_Date Date Not NULL,
    Dist_ID int,
    primary key(ID),
    foreign key(Dist_ID) REFERENCES distributor(ID)
);

ALTER TABLE author ADD Trans_ID int;
ALTER TABLE author ADD foreign key(Trans_ID) REFERENCES author(ID);


-- Enter Author data
INSERT INTO author(ID, Auth_Name, Nationality, Date_of_birth, Gender, Qualification, Phone)
VALUES
	(1,'Sadhguru', 'Indian', '1957-9-3', 'MALE', 'mystic', 9198765432),
    (2,'Jiddu Krishnamurti', 'Indian', '1895-5-11', 'MALE', 'realized_being, Philoshoper', 9178674532),
    (3,'Osho', 'Indian', '1931-12-11', 'MALE', 'mystic', 9178573545),
    (4,'Swami Vivekananda', 'Indian', '1863-01-12', 'MALE', 'Hindu Monk', 9178562542),
    (5,'Ram Krishna', 'Indian', '1836-02-18', 'MALE', 'religious_leader, Mystic', 9178232631),
    (6,'Annie Besant', 'British', '1847-10-01', 'FEMALE', 'socialist, theosophist, educationist', 9179432612),
    (7,'Leadbeater', 'Australian', '1854-02-16', 'MALE', 'Occultists', 9175832456),
    (8,'Helena Blavatsky', 'Russian', '1831-08-12', 'FEMALE', 'theosophist', 9174831412),
    (9,'Richard Alpert', 'United States', '1931-04-06', 'MALE', 'spritual_teacher, psychologist', 9173824531),
    (10,'Kahlil Gibran', 'Lebanon', '1883-01-06', 'MALE', ' poet and visual artist', 9173622512);

-- Entering book data
-- Author Sadhguru
INSERT INTO book(ID, Title, No_of_Prints, Print_Date, No_of_Page, Published_Date, Edition, Price, Auth_ID)
VALUES
	(1, 'Inner Engineering', '10', '2020-02-12', 500, '2016-07-08', '1st', 400, 1),
    (2, 'Why Suffering', '5', '2021-02-12', 670, '2006-09-01', '1st', 299, 1),
    (3, 'Death; An Inside Story', '20', '2021-01-12', 1001, '2020-02-21', '1st', 700, 1),
    (4, 'Encounter the Enlightened', '5', '2021-03-15', 570, '2001-01-02', '1st', 799, 1),
    (5, "Karma: A Yogi's Guide to Crafting Your Destiny", '12', '2022-02-13', 870, '2022-02-013', '1st', 999, 1),
-- Author Jiddu Krishnamurti
	(6, "Freedom from the Known", '5', '2019-02-13', 870, '1969-01-01', '1st', 1099, 2),
	(7, "As One is: To Free the Mind from All Conditioning", '50', '1955-02-13', 870, '2007-06-15', '1st', 1299, 2),
    (8, "Awakening of intelligence", '20', '2018-04-23', 550, '1973-02-05', '1st', 1199, 2),
-- Author Osho
	(9, "Awareness: The Key to Living in Balance", '25', '2018-12-10', 750, '2001-12-10', '1st', 1499, 3),
    (10, 'Living Dangerously', '35', '2018-12-10', 750, '2011-12-10', '2nd', 799, 3),
-- Author Swami Vivekananda
	(11, 'Yoga Sutras of Patanjali', '65', '2019-12-10', 850, '2011-12-10', '2nd', 799, 4),
-- Annie Besant
	(12, 'Annie Besant: An Autobiography', '65', '2021-12-10', 850, '1893-12-10', '3rd', 999, 6),
	(13, 'Ancient Wisdom', '25', '2022-01-10', 550, '1897-12-10', '3rd', 699, 6),
-- Khalil Gibran
	(14, 'The Voice of the Master', '12', '2017-01-10', 825, '1958-02-10', '4th', 1299, 10),
	(15, 'Broken Wings', '21', '2016-01-10', 825, '1912-02-10', '4th', 1399, 10);
    
UPDATE book
SET Print_Date = '2022-02-12',
	Published_Date = '2022-02-09'
WHERE ID = 3;

UPDATE book
SET No_of_Page = '800'
WHERE ID = 6;


-- book language
INSERT INTO language(English, Nepali, Hindi, Book_ID)
VALUES
-- Author sadhguru
	(true, false, true, 1), (true, false, false, 2), (true, false, true, 3), (true, false, false, 4), (true, false, false, 5),
-- Author Jiddu Krishnamurti
	(true, false, true, 6),(true, false, false, 7),(true, true, false, 8),
-- Author osho
	(true, true, true, 9),(true, false, false, 10),
-- Author Swami vivekanada
	(true, false, true, 11),
-- Author Annie Besent
	(true, false, true, 12),(true, false, true, 13),
-- Author Khlil Gibran
	(true, false, true, 14),(true, false, false, 15);


-- Table Print
INSERT INTO print(ID, Print_num, Book_ID)
VALUES
	(1, 10, 1),
	(2, 5, 10),
	(3, 15, 15),
	(4, 20, 8);

-- Distributor data inserting

-- droping foreign key from distributor table 
-- instead adding this Book_ID to book_items table
ALTER TABLE distributor
DROP foreign key distributor_ibfk_1;
ALTER TABLE distributor
DROP COLUMN Book_ID;

INSERT INTO distributor(ID, Location, Dist_Name, Pan, Phone)
VALUES
	(1,'Raghunathpur-Lahan','Chandan',193456,9811771892),
	(2, 'Golbazar', 'Samsad', 187453, 9815345672),
    (3, 'Kathmandu', 'Ram Sapkota', 174532, 9876453212),
    (4, 'Pokhara', 'Hari Narayan', 165429, 9870543621),
    (5, 'Biratnagar', 'Krishna Yadav',134823, 9856432134),
	(6, 'Jhapa', 'Saskar Khadka', 156783, 9876456312);
    
ALTER TABLE book_items
DROP COLUMN Book_Name;

ALTER TABLE book_items
ADD Book_ID int;
ALTER TABLE book_items
ADD FOREIGN KEY(Book_ID) REFERENCES book(ID);

INSERT INTO book_items(Dist_ID, Book_ID, Quantity)
VALUES
	(1, 1, 20),	(1, 2, 10),	(1, 3, 0), (1, 10, 20), (1, 15, 0),
    (5, 4, 50), (5, 7, 12), (5, 3, 0), (5, 12, 15),
    (3, 1, 20), (3, 2, 10), (3, 3, 0), (3, 4, 50), (3, 5, 5), (3, 6, 100), (3, 7, 12), (3, 8, 200);

-- Inserting data of sales
INSERT INTO sale(ID, Customer, Sales_Amount, Dist_ID)
VALUES
	(1, 'Ayush Paudel', 10000, 1),
    (2, 'Svarnim', 15000, 3),
    (3, 'Bipul', 5000, 5);

ALTER TABLE sales_items
ADD COLUMN Book_ID int;
ALTER TABLE sales_items
ADD FOREIGN KEY(Book_ID) REFERENCES book(ID);

INSERT INTO sales_items(Sales_ID, Book_ID)
VALUES
	(1, 1),(1, 3),(1, 4),
    (2, 1),(2, 8),(2, 3),(2, 6),
	(3, 3),(3, 7);
    
    
-- Inserting data of order
INSERT INTO book_order(ID, Orderd_Date, Dist_ID)
VALUES
	(1, 1),
    (2, '2021-11-12', 6),
    (3, '2022-02-14', 4);
    
    ALTER TABLE order_items
    ADD COLUMN Ordered_Date Date;

-- Inserting data of order_items
INSERT INTO order_items(Order_ID, Book_ID, Quantity, Discount, Total_Amount, Ordered_Date)
VALUES 
	(1, 1, 100, 2000, 20000,'2022-02-10'), (1, 2, 50, 1500, 30000,'2021-02-10'), (1, 10, 50, 1000, 15000,'2019-02-10'),
    (2, 15, 75, 3500, 30000,'2021-10-10'), (2, 10, 100, 1500, 50000, '2021-11-15'), (2, 5, 50, 2000, 4000, '2018-06-30'), (2, 10, 200, 2000, 70000, '2020-12-30'),
    (3, 4, 20, 4000, 40000, '2020-04-10'), (3, 5, 30, 200, 2000, '2020-06-20'), (3, 6, 20, 3000, 70000, '2017-07-12');
    
-- Inserting data of book_transaction
INSERT INTO book_transaction(ID, Total_Payment, Tax, Trans_Date, Dist_ID)
VALUES
	(1, 10000, 1300, '2020-02-12', 1),
    (2, 5000, 650, '2022-01-30', 1),
    (3, 2300, 300, '2021-05-23', 2),
    (4, 7500, 700, '2019-07-24', 3),
    (5, 8942, 876, '2018-05-28', 3);
-- ---------------------

-- Assigning value to Trans_ID in author table 
-- for those author whose book has been sold
UPDATE author
SET Trans_ID = 1
WHERE ID = 2;

-- selecting data about book to be printed
SELECT print.ID, print.Print_num, print.Book_ID, book.Title 
FROM 
print
INNER JOIN 
book 
ON print.Book_ID = book.ID;

-- ---------------------
-- selecting data about book that are available to distributor
SELECT distributor.Dist_Name, book.Title, book_items.Quantity
FROM 
book_items
INNER JOIN
book
ON book_items.Book_ID = book.ID
INNER JOIN
distributor
ON book_items.Dist_ID = distributor.ID;

-- ---------------------
-- selecting sales data in table
SELECT sale.Customer, sale.Sales_Amount, distributor.Dist_Name, book.Title
FROM
sale
INNER JOIN
sales_items
ON sales_items.Sales_ID = sale.ID
INNER JOIN
book
ON sales_items.Book_ID = book.ID
INNER JOIN
distributor
ON sale.Dist_ID = distributor.ID;

-- ---------------------
-- selecting sells data
SELECT sale.Customer
FROM sale
WHERE ID = 1
UNION
SELECT sale.Sales_Amount
FROM sale
WHERE ID = 1
UNION
SELECT book.Title
FROM book
WHERE ID
IN(SELECT Book_ID FROM sales_items WHERE Sales_ID = 1);
-- ---------------------

-- ---------------------
-- selecting data about order received from distributor in table
SELECT distributor.Dist_Name, distributor.Phone, 
		book.Title, order_items.Quantity, 
		order_items.Total_Amount,
		order_items.Ordered_Date, order_items.Discount
FROM
order_items
INNER JOIN
book_order
ON order_items.Order_ID = book_order.ID
INNER JOIN
book
ON order_items.Book_ID = book.ID
INNER JOIN
distributor
ON book_order.Dist_ID = distributor.ID;
-- ---------------------


