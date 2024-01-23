//program tested on debian testing with gcc version 9.3.0

#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char dis[20];
int tc,tac,trc,id;
char sqlscript[128];

//functions for color
void red ()
{
  printf("\033[1;31m");
}

void blue ()
{
  printf("\033[0;34m");
}

void green()
{
  printf("\033[0;32m");
}

void purple()
{
  printf("\033[0;35m");
}

void sky_blue()
{
  printf("\033[0;36m");
}

void yellow()
{
  printf("\033[01;33m");
}

void reset ()
{
  printf("\033[0m");
}

//ask for various data
void data()
{
        blue();
        puts("Enter the data:\n");
        printf("Enter ID : ");
        scanf("%d",&id);
        printf("District : ");
        scanf("%s",dis);
        printf("Total Cases : ");
        scanf("%d",&tc);
        printf("Total Acitve Cases : ");
        scanf("%d",&tac);
        printf("Total Recovered Cases : ");
        scanf("%d",&trc);
        reset();

        //prevent invalid input
        if (tac > tc || trc > tc)
        {
          red();
          printf("Error!\t\'Total Active Cases cannot be greater than Total Cases or Total Recovered Cases\'\n");
          reset();
          exit(1);
        }

}

//callback function
static int callback(void* data, int argc, char** argv, char** azColName)
{

    for (int i = 0; i < 5; i++)
    {

        sky_blue();

        printf("%s\t",argv[i]);

        if (strlen(argv[i]) > 8)
        {
            printf("\t");
        }
        else
        {
            printf("\t\t");
        }

    }
    printf("\n");

    reset();
    return 0;
}


int main()
{
    time_t t;
    time(&t);
    sqlite3 *db;
    int database;
    char *sql;
    database = sqlite3_open("covid.db",&db);
    int choice=0;

    //display date/time
    purple();
    printf("\n%s\n",ctime(&t));
    reset();


    green();
    puts("\nTo add new cases PRESS \t1 \nTo display existing data PRESS \t2\nTo Delete a Row PRESS \t3");
    reset();

    scanf("%d",&choice);

    //create table covid

    sql = "CREATE TABLE COV("  \
    "ID       INT PRIMARY KEY,  " \
    "DISTRICT           TEXT,    " \
    "TOTAL_CASES            INT,  " \
    "TOTAL_ACTIVE_CASES        INT,"\
    "TOTAL_RECOVERED_CASES         INT );";

    database = sqlite3_exec(db, sql,0,0,0);

    //add new row
    if (choice == 1)
    {
        data();
        sql = sqlscript;
        sprintf(sql, "INSERT INTO COV VALUES(%d,'%s', %d, %d, %d);", id,dis, tc, tac, trc);
        database = sqlite3_exec(db, sql,0,0,0);

        purple();
        printf("\nData modified on %s\n",ctime(&t));
        reset();
    }

    //display the database
    else if (choice == 2)
    {
        sql = "SELECT * FROM COV;";
        printf("\n");

        yellow();
        printf("ID\t\t\tDistrict\tTotal Cases\tTotal Active Cases\tTotal Recoverd Cases\n\n");
        reset();

        sqlite3_exec(db, sql, callback, 0, 0);

        purple();
        printf("\nData displayed on %s\n",ctime(&t));
        reset();
    }

    //delete the data base
    else if (choice == 3)
    {
        puts("Enter ID of row which you want to delete");
        scanf("%d",&id);
        sql = sqlscript;
        sprintf(sql, "DELETE FROM COV WHERE ID = (%d);", id);
        database = sqlite3_exec(db, sql,0,0,0);

        red();
        printf("The row got deleted with ID = %d\n",id);
        reset();

        purple();
        printf("\nData modified on %s\n",ctime(&t));
        reset();
    }

    else
    {
        puts("Invalid choice!");
    }

    sqlite3_close(db);
    return 0;
}

