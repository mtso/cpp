//
//  main.cpp
//  lab-13-5
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#include <iostream>
#include "SavingsAccount.h"
#include "Utilities.h"

using namespace std;

int main(int argc, const char * argv[]) {

    SavingsAccount bank1(100, 4);

    SavingsAccount bank2;
    cout << "Created bank" << bank2.getID() << " with default values of 0 dollars and 0 cents." << endl;

    bank1.deposit(10, 3);
    bank2.deposit(10, 3);
    bank1.withdraw(10, 3);
    bank2.withdraw(10, 3);

    cout << "bank1 balance: " << bank1.getBalance().dollars 
         << " dollars and "   << bank1.getBalance().cents 
         << " cents." << endl;
    cout << "bank2 balance: " << bank2.getBalance().dollars 
         << " dollars and "   << bank2.getBalance().cents 
         << " cents." << endl;

    return 0;
}
