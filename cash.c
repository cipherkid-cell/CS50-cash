#include <cs50.h>
#include <stdio.h>



int main(void)
{
    // Declaring the local variables here
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int difference;
    int difference1;
    int difference2;
    int cents;
    do
    {
        // Prompt the user to enter the amount of Cents and re-prompt if amount entered is negative
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate the number of Quarters
    quarters = cents / 25;

    // Subtract the value of Quarters from the total Cents entered by the user
    int factor = 25 * quarters;
    difference = cents - factor;

    // Calculate number of Dimes
    dimes = difference / 10;

    //Subtract the value of Dimes from remaining Cents
    int factor1 = 10 * dimes;
    difference1 = difference - factor1;

    // Calculate number of Nickels
    nickels = difference1 / 5;

    // Subtract the value of Nickels from remaining Cents
    int factor2 = 1 * nickels;
    difference2 = difference1 - factor2;

    // Calculate number of Pennies
    pennies = difference2 / 1;

    // Summing up the number of coins
    int coins = quarters + dimes + nickels + pennies;
    printf("%i", coins);
    printf("\n");
    return 0;
}