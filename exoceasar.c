#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv [])
{
    if (argc == 2)
    {
        int k = atoi (argv[1]);

        string text = get_string ("plaintext");
        printf ("cyphertext :");

        for (int j=0; j<strlen (plaintext); j++)

        if (isalpha (plaintext [j]))
        {
            if (isupper (plaintext [j]))
            {
                printf ("%c", (((plaintext [j] - 65)+ k)% 26)+ 65);
            }
            if (islower (plaintext [j]))
            {
                printf ("%c", (((plaintext [j]- 97)+k)%26)+ 97);
            }
            else
            {
            printf ("invalid");
            return = 0;
            }
        }
    }
}