// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
    Account *p1 = new Trust_Account("Richard", 100000.0, 2.0);
    Account *p2 = new Checking_Account("Gwen", 1000.0);
    Account *p3 = new Savings_Account("Elliot", 1000.0, 1.0);
    
    std::vector<Account *> accounts {p1,p2,p3};
    
    // Testing accounts
    for(size_t i=1; i<6; i++){
        display(accounts);
        deposit(accounts, i * 1500);
        withdraw(accounts, i * 1500);
    }

    
    return 0;
}

