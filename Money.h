//
// Created by trentr on 3/25/22.
//

#ifndef CS_202_PA3_1104_RILEY_TRENT_MONEY_H
#define CS_202_PA3_1104_RILEY_TRENT_MONEY_H

#include <iostream>
#include <string>

class Money {
private:
    int cents;
public:
    Money();
    Money(int dollars, int cents);
    Money operator +(const Money &c1);
    Money operator -(const Money &c1);
    friend std::ostream& operator <<(std::ostream& os, const Money& money);
    bool operator >(const Money &c1);
    bool operator <(const Money &c1);
    bool operator >=(const Money &c1);
    bool operator <=(const Money &c1);
    bool operator !=(const Money &c1);
    bool operator ==(const Money &c1);
};


#endif //CS_202_PA3_1104_RILEY_TRENT_MONEY_H
