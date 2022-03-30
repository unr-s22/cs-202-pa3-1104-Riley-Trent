//
// Created by trentr on 3/25/22.
//


#include "Money.h"

Money::Money()
{

}

Money::Money(int dollarAmount, int centAmount)
{
    cents = centAmount + (dollarAmount * 100);
}

std::ostream& operator<< (std::ostream& os, const Money& money)
{
    if(money.cents < 0)
    {
        if(money.cents * -1 % 100 < 10)
        {
            os << '$' << money.cents / 100 << ".0" << (money.cents * -1 % 100) << std::endl;
        }
        else
        {
            os << '$' << money.cents / 100 << '.' << (money.cents * -1 % 100) << std::endl;
        }
    }
    else if(money.cents % 100 < 10)
    {
        os << '$' << money.cents / 100 << ".0" << money.cents % 100 << std::endl;
    }
    else
    {
        os << '$' << money.cents / 100 << '.' << money.cents % 100 << std::endl;
    }
    return os;
}

Money Money::operator+(const Money &c1)
{
    int cent;
    cent = cents + c1.cents;

    return Money(0, cent);
}

Money Money::operator-(const Money &c1)
{
    int cent;
    cent = cents - c1.cents;

    return Money(0, cent);
}

bool Money::operator ==(const Money &c1)
{
    return (cents == c1.cents);
}

bool Money::operator !=(const Money &c1)
{
    return !(operator ==(c1));
}

bool Money::operator >(const Money &c1)
{
    return (cents > c1.cents);
}

bool Money::operator <(const Money &c1)
{
    return (cents < c1.cents);
}

bool Money::operator >=(const Money &c1)
{
    return !(operator <(c1));
}

bool Money::operator <=(const Money &c1)
{
    return !(operator >(c1));
}