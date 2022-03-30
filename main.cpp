

#include <iostream>
#include <vector>
#include "Money.h"
#include "account.hpp"

int main()
{

    Money m(300,23);
    Money n(200,00);
    Money v(300,24);
    Money r(501,22);
    Money w(300,10);
    Money x(201,34);
    Account account(m);
    account.makeDeposit(n);
    account.makeDeposit(v);
    account.makeDeposit(r);
    account.makeWithdrawl(w);
    account.makeWithdrawl(x);
    account.calculateBalance(m);
    std::cout << account << std::endl;

    Money a(200, 55);
    Money b(300, 55);
    std::cout << "Now testing relational operators." << std::endl;
    std::cout << "A = " << a << "B = " << b  << std::endl;
    std::cout << "A is greater than B, should be false, result is: ";
    if(a > b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "A is less than B, should be true, result is: ";
    if(a < b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "A equals B, should be false, result is: ";
    if(a == b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "A equals B, should be true, result is: ";
    if(a != b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "A is less than or equal to B, should be true, result is: ";
    if(a <= b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "A is greater than or equal to B, should be false, result is: ";
    if(a >= b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    return 0;
}