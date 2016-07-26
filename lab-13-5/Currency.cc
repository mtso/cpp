//
//  Currency.cc
//  lab-13-5
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#include "Currency.h"

Currency Currency::operator +(Currency& right) {
    dollars += right.dollars;
    cents += right.cents;
    normalize();
    return *this;
}

Currency Currency::operator +=(Currency& right) {
    dollars += right.dollars;
    cents += right.cents;
    normalize();
    return *this;
}

bool Currency::operator -=(Currency const& right) {
    int testCents = cents;
    int testDollars = dollars;
    
    testCents -= right.cents;
    testDollars -= right.dollars;
    
    if (testCents < 0) {
        testDollars += testCents / 100 - 1;
        testCents = testCents % 100 + 100;
    }
    
    if (testDollars < 0) {
        return false;
    } else {
        dollars = testDollars;
        cents = testCents;
        return true;
    }
}

void Currency::normalize() {
    if (cents >= 100) {
        dollars += cents / 100;
        cents = cents % 100;
    }
}
