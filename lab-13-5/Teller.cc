//
//  Teller.cc
//
//  CIS 22B, Lab 13.5 
//  This program acts as a bank teller that sets up
//  two bank accounts and makes deposits and withdrawals.
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#include <iostream>
#include "SavingsAccount.h"
#include "Utilities.h"

using namespace std;
const int ACCT_NUM = 2;

int main(int argc, const char * argv[]) {

    // Declare dollars and cents for input, i for loop counting
    int dollars, cents, i;

    // Get initial amounts for the first account
    cout << "Please input the initial dollars for bank1: ";
    dollars = getPositiveInteger();
    cout << "Please input the initial cents for bank1: ";
    cents = getPositiveInteger();

    // Construct the two SavingsAccount objects
    SavingsAccount bank1(dollars, cents);
    SavingsAccount bank2;
    cout << "Created bank" << bank2.getID() << " with default values of 0 dollars and 0 cents." << endl;

    // Create a loopable array of the constructed accounts
    SavingsAccount bank[ACCT_NUM] = {bank1, bank2};

    // Make deposits
    for (i = 0; i < ACCT_NUM; i++) {
        cout << "Please input the dollars to be deposited into bank" << bank[i].getID() << ": ";
        dollars = getPositiveInteger();
        cout << "Please input the cents to be deposited into bank" << bank[i].getID() << ": ";
        cents = getPositiveInteger();

        bank[i].deposit(dollars, cents);
    }

    // Make withdrawals
    for (i = 0; i < ACCT_NUM; i++) {
        cout << "Please input the dollars to be withdrawn from bank" << bank[i].getID() << ": ";
        dollars = getPositiveInteger();
        cout << "Please input the cents to be withdrawn into bank" << bank[i].getID() << ": ";
        cents = getPositiveInteger();

        bank[i].withdraw(dollars, cents);
    }

    // Print balances
    for (i = 0; i < ACCT_NUM; i++) {
        cout << "bank" << bank[i].getID() << " balance: " << bank[i].getBalance().dollars 
             << " dollars and "   << bank[i].getBalance().cents << " cents." << endl;
    }

    return 0;
}
