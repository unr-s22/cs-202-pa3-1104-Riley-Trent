//
//  account.cpp
//  Account
//
//  Created by Wyatt Elquist on 3/26/22.
//

#include "Money.h"
#include "account.hpp"

using namespace std;

Account::Account(){}

Account::Account(Money& m){
    iBalance.push_back(m);
}

void Account::makeDeposit(Money& m){
    ++numberDeposits;
    deposit.push_back(m);
    updateBalance = true;
}

void Account::makeWithdrawl(Money& m){
    ++numberWithdrawls;
    withdrawl.push_back(m);
    updateBalance = true;
}

ostream& operator << (ostream &os, Account &account) {
    os << "Account Details\n" << "--------------------------\n" << "Current Balance:" << account.iBalance.front() + account.deposit.back() - account.withdrawl.back()  << "--------------------------\n" << "Number of Deposits: " << account.numberDeposits << "\n" << "--------------------\n";
    for (int i = 0; i < account.numberDeposits; i++) {
        os  << "(" << i+1 << ") " << account.deposit[i];
    }
    os << "--------------------------\n" << "Number of Withdrawals: " << account.numberWithdrawls<< "\n" << "--------------------------\n";
    for (int i = 0; i < account.numberWithdrawls; i++) {
        os  << "(" << i+1 << ") " << account.withdrawl[i];
    }
    return os;
}

void Account::calculateBalance(Money &m){
    if (updateBalance) {
        auto sum_deposit =
            accumulate (deposit.begin(), deposit.end(), m);
            deposit.push_back(sum_deposit - m);
    }
    if (updateBalance) {
        auto sum_withdrawl =
            accumulate (withdrawl.begin(), withdrawl.end(), m);
        withdrawl.push_back(sum_withdrawl - m);
    }
    }
