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
    Money m(300,23);
    Money n(200,00);
    Money v(300,24);
    Money r(501,22);
    Money w(300,10);
    Money x(201,34);
    std::vector<Money> money;
    money.push_back(m);
    money.push_back(n);
    Account account(m);
    account.makeDeposit(n);
    account.makeDeposit(v);
    account.makeDeposit(r);
    account.makeWithdrawl(w);
    account.makeWithdrawl(x);
    account.calculateBalance(m);
    cout << account;
    return 0;
}


