//
//  main.cpp
//  Account
//
//  Created by Wyatt Elquist on 3/26/22.
//
#include "Money.hpp"
#include "account.hpp"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    Money m(101,10);
    Money n(100,10);
    std::vector<Money> money;
    money.push_back(m);
    money.push_back(n);
    for(Money m: money)
    {
        std::cout << m;
    }

    Money o(0,0);
    o = m + n;
    std::cout << o;

    if(m >= n)
    {
        std::cout << "True" << std::endl;
    }
    else
    {

        std::cout << "False" << std::endl;
    }
    Account account(m);
    account.makeDeposit(m);
    account.makeDeposit(m);
    account.makeDeposit(m);
    account.makeWithdrawl(m);
    account.calculateBalance(m);
    cout << account;
    return 0;
}


