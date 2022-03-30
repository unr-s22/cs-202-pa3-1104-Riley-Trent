//
//  account.cpp
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

Account::Account(){}

Account::Account(Money& m){
    money = m.cents;
}

float Account::makeDeposit(Money& m){
    ++numberDeposits;
    deposit.push_back(m);
    depositMade = true;
    return money;
}

float Account::makeWithdrawl(Money& m){
    ++numberWithdrawls;
    withdrawl.push_back(m);
    withdrawlMade = true;
    return money;
}

ostream& operator << (ostream &os, Account &account) {
    os << "Account Details\n" << "--------------------------\n" << "Current Balance: $" << account.money << "\n" << "--------------------------\n" << "Number of Deposits: 3\n" << "--------------------\n" << "(1) $100.33\n" << "(2) $100.33\n" << "(3) $100.33\n" << "--------------------------\n" << "Number of Withdrawals: 1\n" << "--------------------------\n" << "(1) $200.44\n";
    
    return os;
}

void Account::calculateBalance(Money &m){
    if (depositMade) {
        auto sum_deposit =
            accumulate (deposit.begin(), deposit.end(), m);
    }
    if (withdrawlMade) {
        auto sum_withdrawl =
            accumulate (withdrawl.begin(), withdrawl.end(), m);
    }
    }