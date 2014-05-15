/*Nevin Leh-05/15/2014-Lab 2 source code*/

#include <stdio.h>
#include <stdlib.h>

int total_Balance(int savings_acount_balance, int checking_account_balance);
void multiply_Numbers();



int total_Balance(int savings_account_balance, int checking_account_balance){

    int total_balance = savings_account_balance +  checking_account_balance;
        printf("Balance in checking is %i dollars and %i cents\nBalance in savings is %i dollars and %i cents\nTotal balance is %i dollars and %i cents\n", checking_account_balance/60,checking_account_balance%60
              , savings_account_balance/60, savings_account_balance%60, total_balance/60,total_balance%60 );
        return total_balance;
}

void multiply_Numbers(){
    puts("----Problem 2----");
    int first_number;
    int second_number;
    puts("type a number and press enter");
    scanf("%i",&first_number);
    puts("type a second number and press enter");
    scanf("%i",&second_number);
    int product_number = first_number * second_number;
    printf("the product of %i and %i is %i", first_number, second_number, product_number);
}

int main(){
    int savings_balance=500;
    int checking_balance=500;
    total_Balance(savings_balance, checking_balance);
    multiply_Numbers();
    return (EXIT_SUCCESS);
}
