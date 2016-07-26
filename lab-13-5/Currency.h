//
//  Currency.cc
//  lab-13-5
//
//  Created by Matthew Tso on 7/21/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#ifndef CURRENCY_H
#define CURRENCY_H

struct Currency {
    int dollars;
    int cents;
    
    Currency operator +(Currency& right);
    Currency operator +=(Currency& right);
    bool operator -=(Currency const& right);
    void normalize();
};

#endif
