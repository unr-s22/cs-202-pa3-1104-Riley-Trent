//
// Created by trentr on 3/25/22.
//

#ifndef CS_202_PA3_1104_RILEY_TRENT_MONEY_H
#define CS_202_PA3_1104_RILEY_TRENT_MONEY_H

#include <iostream>
#include <string>

class Money {
private:
    int dollars;
    int cents;
public:
    Money();
    Money(int dollars, int cents);
    Money operator +(const Money &c1)
    {
        int dollar, cent;
        dollar = (dollars + c1.dollars);
        cent = cents + c1.cents;

        if(cent >= 100)
        {
            dollar += 1;
            cent -= 100;
        }

        return Money(dollar, cent);
    }
    Money operator -(const Money &c1)
    {
        int dollar, cent;
        dollar = dollars - c1.dollars;
        cent = cents - c1.cents;

        if(cent < 0)
        {
            cent += 100;
            dollar -= 1;

        }

        return Money(dollar, cent);
    }
    friend std::ostream& operator <<(std::ostream& os, const Money& money);
    friend bool operator >(const Money &c1, const Money &c2);
    friend bool operator <(const Money &c1, const Money &c2);
    friend bool operator >=(const Money &c1, const Money &c2);
    friend bool operator <=(const Money &c1, const Money &c2);
    friend bool operator !=(const Money &c1, const Money &c2);
    friend bool operator ==(const Money &c1, const Money &c2);
};


#endif //CS_202_PA3_1104_RILEY_TRENT_MONEY_H
