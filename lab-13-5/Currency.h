
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
