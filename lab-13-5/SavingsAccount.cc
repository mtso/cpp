//
//  SavingsAccount.cpp
//  lab-13-5
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#include "SavingsAccount.h"

int SavingsAccount::id_count = 1;

SavingsAccount::SavingsAccount(int dollars, int cents) : id(id_count++) {
	balance.dollars = dollars;
	balance.cents = cents;
}

Currency SavingsAccount::deposit(int dollars, int cents) {
    Currency amount = {dollars, cents};
    balance += amount;
    return balance;
}

bool SavingsAccount::withdraw(int dollars, int cents) {
    Currency amount = {dollars, cents};
    return (balance -= amount) ? true : false;
}

/* 
// Exercise 1
Currency SavingsAccount::openAccount(int dollars, int cents) {
    balance.dollars = dollars;
    balance.cents = cents;
    return balance;
}
*/
