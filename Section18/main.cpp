#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    
    std::unique_ptr<Account> richards_account;
    std::unique_ptr<Account> gwens_account;
    try{
        richards_account = make_unique<Savings_Account>("Richard", -20.0);
    
    } catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    
    gwens_account = make_unique<Checking_Account>("Gwen", 100.0);
    
    try{
        gwens_account->withdraw(1000.0);
    }catch (const InsufficientFundsException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

