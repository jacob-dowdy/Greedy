#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{ 
    // declaring variables
    int amount;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    int coin_count = 0;
    float money_given = 0;
   
    // user input
    do {
        printf("How much change is owed? ");
        money_given = GetFloat();
    }
    // Making sure the variable is greater than 0
    while (money_given <= 0);

    // converts the amount given by the user to cents
    amount = round (money_given * 100);
    
    // coin counting for quarters, dimes, nickels and pennies
    while (amount >= q) {
       coin_count++;
       amount = amount - q;
   }
       
    while (amount < q && amount >=d) {
        coin_count++;
        amount = amount - d;
        
   }
   
   while (amount < d && amount >= n) {
       coin_count++;
       amount = amount - n;
   }
   
   while (amount < n && amount >= p) {
       coin_count++;
       amount = amount - p;
   }
    printf("%d\n", coin_count);
    
    return 0;
    }