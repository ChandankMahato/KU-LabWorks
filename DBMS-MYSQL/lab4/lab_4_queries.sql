-- LAB 4 - WORKING WITH PostgreSQL

-- Tasks
-- 1. Install PostgreSQL server.
-- 1 => Installed PostgreSQL server.

-- 2. Imported the given data.

-- 3. Write Some SQL queries to explore the tables.
SELECT * FROM actors;
SELECT * FROM directors
SELECT * FROM movies;
SELECT * FROM movies2actors;
SELECT * FROM movies2directors;
SELECT * FROM u2base;
SELECT * FROM users;
SELECT DISTINCT a_gender FROM actors;
SELECT DISTINCT rating FROM u2base;

-- 4. Create a view for the following
-- 4 (1) average rating of all movies
CREATE VIEW rating_integer AS
(
	SELECT userid, movieid,
    CAST(rating AS integer) AS Rating
    FROM u2base
);
SELECT avg(Rating) AS average_rating FROM rating_integer;

-- 4 (2) number of actors in each movie
CREATE VIEW no_of_actors AS
(
	SELECT 
    movies2actors.movieid AS movie,
    COUNT(movies2actors.actorid) AS actor_count
    FROM
    movies2actors
    GROUP BY movies2actors.movieid
);
SELECT * FROM no_of_actors;

-- 4 (3) number of rating for each movie
CREATE VIEW ratings_for_each_movie AS
(
	SELECT 
    u2base.movieid AS movie,
    COUNT(u2base.rating) AS rating_count
    FROM
    u2base
    GROUP BY u2base.movieid
);
SELECT * FROM ratings_for_each_movie;

-- 4 (4) number of rating by each user
CREATE VIEW ratings_by_each_user AS
(
	SELECT
	u2base.userid AS USER,
	COUNT (u2base.rating) AS rating_count
	FROM
	u2base
	GROUP BY u2base.userid
);
SELECT * FROM ratings_by_each_user;

-- 5 Find the number of users who have rated at least one movie.
CREATE VIEW user_count AS(
SELECT rating_integer.userid As users
	FROM
	rating_integer
	INNER JOIN
	users
	ON rating_integer.userid = users.userid
	WHERE rating_integer.rating != 0
)
SELECT Count(users) FROM user_count;

-- 6 Find the number of unrated movies
CREATE VIEW rating_integer AS
(
	SELECT userid, movieid,
    CAST(rating AS integer) AS Rating
    FROM u2base
);
SELECT count(rating_integer.movieid) FROM
rating_integer WHERE rating_integer.rating = 0;

-- 7 Find top 10 highest rated movies and the actors who played in those movies.
CREATE VIEW highly_rated_movies AS (SELECT rating_integer.movieid,
COUNT(rating_integer.rating) AS rating_count
FROM
rating_integer
GROUP BY(rating_integer.movieid)
ORDER BY rating_count DESC LIMIT 10);

SELECT * FROM highly_rated_movies;

SELECT 
highly_rated_movies.movieid, movies2actors.actorid
FROM
movies2actors
INNER JOIN
highly_rated_movies
ON highly_rated_movies.movieid = movies2actors.movieid;



