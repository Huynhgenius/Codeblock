#include <stdio.h>
#include <string.h>
#include <math.h>
#define max_string 80
#define len_string 50
#include <iostream>

using namespace std;

struct myclear
{
    int date_print;
    int count = 0;
    int pass = 0;
};

void mychecker(int m, int d, int y)
{
    myclear myClear;
    // declaration of a string variable
    char error[] = "Input error: ";
    char pos[] = "The value of full year must be a positive integer.";
    char invalid[] = "is an invalid date";
    char valid[] = "is a valid date";
    char date_value[] = "The value of date must be from 1 to 31.";
    char month_value[] = "The value of month must be from 1 to 12.";
    char string_store[len_string][max_string] = {};

    // assign 0 to array
    for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
    {
        strcpy(string_store[i], "0");
    }

    // check year on this ways
    if (y < 0)
    {
        int x = 0;

        for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
        {
            if (string_store[i][0] == '0' && x == 0)
            {
                strcpy(string_store[i], pos);
                x = 1;
            }
        }
    }

    // m checking

    // switch case in m
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d > 31 || d < 1)
        {
            int x = 0;
            for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
            {
                if (string_store[i][0] == '0' && x == 0)
                {
                    strcpy(string_store[i], date_value);
                    myClear.date_print = 1;
                    x = 1;
                }
            }
        }
        break;
    case 2:
        // this case test year have 29 day
        if (abs(y) % 4 == 0 && y == 2100  )
        {


            if (d <= 0 || d >= 29 )
            {
                int x = 0;
                for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
                {
                    if (string_store[i][0] == '0' && x == 0)
                    {

                        myClear.pass = 2;
                        myClear.date_print = 1;
                        x = 1;
                    }
                }
            }
        }else if (abs(y) % 4 == 0  )
        {
            if (d <= 0 || d > 29 )
            {

                int x = 0;
                for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
                {
                    if (string_store[i][0] == '0' && x == 0)
                    {

                        myClear.pass = 1;
                        myClear.date_print = 1;
                        x = 1;
                    }
                }
            }
        }
        else
        {
            if (d <= 0 || d > 28)
            {
            printf("fadfadsfasdfa\n");
                int x = 0;
                for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
                {
                    if (string_store[i][0] == '0' && x == 0)
                    {

                        myClear.pass = 1;
                        myClear.date_print = 1;
                        x = 1;
                    }
                }
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (d > 30 || d < 1)
        {

            int x = 0;
            for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
            {
                if (string_store[i][0] == '0' && x == 0)
                {

                    myClear.pass = 1;
                    myClear.date_print = 1;
                    x = 1;
                }
            }
        }
        break;
    default:
        int x = 0;
        for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
        {
            if (string_store[i][0] == '0' && x == 0)
            {
                strcpy(string_store[i], month_value);
                x = 1;
            }
        }
    }

    if (d > 31 || d < 1)
    {
        int x = 0;
        for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
        {
            if (string_store[i][0] == '0' && x == 0)
            {
                if (myClear.date_print != 1)
                {

                    strcpy(string_store[i], date_value);
                    x = 1;
                }
            }
        }
    }

    // =============================== FINAL ROUTE ================================

    for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]); i++)
    {
        if (string_store[i][0] != '0')
        {
            myClear.count = myClear.count + 1;
        }
    };

    if (myClear.pass == 0 && myClear.count == 0 && myClear.date_print != 1 )
    {
        printf("%02d/%02d/%d %s", m, d, y, valid);
    }
    else if (myClear.pass !=0 && myClear.count == 0 && myClear.date_print == 1)
    {
        printf("%02d/%02d/%d %s", m, d, y, invalid);
    }
    if (myClear.count == 1 && myClear.pass != 1 && y > 0)
    {
        if (m > 12 || m < 1)
        {
            printf("%s%s", error, month_value);
        }
        else
        {
            printf("%s%s", error, date_value);
        }
    }
    else if (myClear.count >= 1)
    {
        int n = 1;
        printf("%s\n", error);

        for (int i = 0; i < sizeof(string_store) / sizeof(string_store[0]) ; i++)
        {
            if (string_store[i][0] != '0')
            {

                printf("      %d. %s\n", n, string_store[i]);
                n++;
            }
        };
    }
}

// run main func
int main()
{
    int m, d, y;
    printf("Please enter any date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &m, &d, &y);
    mychecker(m, d, y);

    return 0;
}
