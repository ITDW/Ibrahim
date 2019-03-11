#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (void)
{
    long long number;
    int counter = 0;
    do
    {
       number = get_long_long ("card number");
    }
    while (number < 0);
        // cdigit number
     long long cdigit = number;
     while (cdigit > 0)
    {
     cdigit = cdigit /10;
     counter++;
    }
    if (counter!= 13 && counter != 15 && counter != 16)
    {
        printf ("this number is invalid");
    }
        cdigit = number;
        int sum = 0;
        for (int i=1; i<= counter; i++)
        {
            int dig = cdigit %10;
            if (i % 2 == 0)
            {
                dig = dig *2;
            }
            {
                if (i % 2 != 0)
                dig = dig *1;
            }
            if (dig > 9)
            {
               dig = dig -9;
            }
            sum = sum + dig;
            cdigit = cdigit / 10;
        }
        if (sum % 10 != 0)
        {
            printf ("the number is invalid ");
        }
        else
        {
            printf (" the number is valid");
        }
        cdigit = number;
    while (cdigit > 100)
    {
        cdigit = cdigit / 10;
    }
    int firstdgt = cdigit;
    if ((firstdgt == 34 || firstdgt == 37) && (counter == 15))
    {
     printf (" it is from Amex");
    }
    else if ((firstdgt > 50 && firstdgt < 56 && counter == 16))
    {
        printf (" it is from Mastercard");
    }
    else if ((firstdgt / 10 == 4) && (counter == 13 || counter == 16))
    {
        printf (" it is from Visa");
    }
    else
    {
        printf (" it is from my Bank");
    }
    printf ("\n");

}