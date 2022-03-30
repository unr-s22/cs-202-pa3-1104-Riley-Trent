//
//  account.hpp
//  Account
//
//  Created by Wyatt Elquist on 3/26/22.
//

#ifndef account_hpp
#define account_hpp

#include "Money.h"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Account{
public:
    Account();
    Account(Money& m);
    void calculateBalance(Money &m);
    void makeDeposit(Money& m);
    void makeWithdrawl(Money& m);
    friend ostream& operator << (ostream &os, Account &account);
    
private:
    int numberDeposits = 0;
    int numberWithdrawls = 0;
    int depositAmmount;
    int withdrawlAmmount;
    bool updateBalance;
    int money;
    vector <Money> iBalance;
    vector <Money> deposit;
    vector <Money> withdrawl;
};

#endif /* account_hpp */
