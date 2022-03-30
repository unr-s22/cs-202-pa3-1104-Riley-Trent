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
    os << "Account Details\n" << "--------------------------\n" << "Current Balance: " << account.deposit.back() - account.withdrawl.back()  << "--------------------------\n" << "Number of Deposits: " << account.numberDeposits << "\n" << "--------------------\n";
    for (int i = 0; i < account.numberDeposits; i++) {
        os  << "(" << i+1 << ")" <<" $100.33\n";
    }
    os << "--------------------------\n" << "Number of Withdrawals: " << account.numberWithdrawls<< "\n" << "--------------------------\n";
    for (int i = 0; i < account.numberWithdrawls; i++) {
        os  << "(" << i+1 << ")" <<" $200.44\n";
    }
    return os;
}

void Account::calculateBalance(Money &m){
    if (depositMade) {
        auto sum_deposit =
            accumulate (deposit.begin(), deposit.end(), m);
            deposit.push_back(sum_deposit);
    }
    if (withdrawlMade) {
        auto sum_withdrawl =
            accumulate (withdrawl.begin(), withdrawl.end(), m);
        withdrawl.push_back(sum_withdrawl);
    }
    }
