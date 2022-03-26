//
// Created by trentr on 3/25/22.
//


#include "Money.h"

Money::Money()
{

}

Money::Money(int dollarAmount, int centAmount)
{
    dollars = dollarAmount;
    cents = centAmount;
}

std::ostream& operator<< (std::ostream& os, const Money& money)
{
    if(money.cents < 10)
    {
        os << '$' << money.dollars << ".0" << money.cents << std::endl;
        return os;
    }
    else
    {
        os << '$' << money.dollars << '.' << money.cents << std::endl;
        return os;
    }

}

bool operator ==(const Money &c1, const Money &c2)
{
    return (c1.cents == c2.cents && c1.dollars == c2.dollars);
}

bool operator !=(const Money &c1, const Money &c2)
{
    return !(c1.cents == c2.cents && c1.dollars == c2.dollars);
}

bool operator >(const Money &c1, const Money &c2)
{
    return (c1.dollars > c2.dollars ||(c1.cents > c2.cents && c1.dollars == c2.dollars));
}

bool operator <(const Money &c1, const Money &c2)
{
    return (c1.dollars < c2.dollars ||(c1.cents < c2.cents && c1.dollars == c2.dollars));
}

bool operator >=(const Money &c1, const Money &c2)
{
    return !(c1.dollars < c2.dollars ||(c1.cents < c2.cents && c1.dollars == c2.dollars));
}

bool operator <=(const Money &c1, const Money &c2)
{
    return !(c1.dollars > c2.dollars ||(c1.cents > c2.cents && c1.dollars == c2.dollars));
}