

#include <iostream>
#include <vector>
#include "Money.h"

int main()
{
    Money m(101,10);
    Money n(100,11);
    std::vector<Money> money;
    money.push_back(m);
    money.push_back(n);
    for(Money m: money)
    {
        std::cout << m;
    }

    Money o(0,0);
    o = m - n;
    std::cout << o;

    if(m > n)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    return 0;
}