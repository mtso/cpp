//
//  SavingsAccount.cpp
//  lab-13-5
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Currency.h"

class SavingsAccount {
public:

	SavingsAccount(int = 0, int = 0);
//    SavingsAccount (SavingsAccount& sourceAccount);
//    SavingsAccount operator= (SavingsAccount& sourceAccount);
    ~SavingsAccount() {} // Nothing to delete.

    Currency deposit(int, int = 0);
    bool withdraw(int, int = 0);
    Currency getBalance() const { return balance; }
    int getID() { return id; }

private:
    int id;
    Currency balance;
    static int id_count;
};

#endif
