#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int fiveh = 500, twohf = 250,twoh = 200, hund = 100, ffty = 50, twtyf = 25, ten = 10, five = 5, one = 1, amount = 0;
    int coins = 0;
        do
        {
         amount = get_int ("the amount we owed you:");
        }
          while (amount < 0);


          while ( amount >= fiveh)
          {
              coins++;
              amount = amount - fiveh;
          }
          while (amount >= twohf)
          {
              coins++;
              amount = amount - twohf;
          }
          while (amount >= twoh)
          {
              coins++;
              amount = amount - twoh;
          }
          while (amount >= hund)
          {
              coins++;
              amount = amount - hund;
          }
          while (amount >= ffty)
          {
              coins++;
              amount = amount - ffty;
          }
          while (amount >= twtyf)
          {
              coins++;
              amount = amount - twtyf;
          }
          while (amount >= ten)
          {
              coins++;
              amount = amount - ten;
          }
          while (amount >= five)
          {
              coins++;
              amount = amount - five;
          }
          while (amount >= one)
          {
              coins++;
              amount = amount - one;



          }
           printf("%i\n", coins);
}