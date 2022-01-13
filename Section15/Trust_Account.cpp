#include "Trust_Account.h"

Trust_Account::Trust_Account(
        std::string name, double balance, double int_rate,
        double bonus_amount, double bonus_min, int max_withdrawals,
        double max_withdraw_pct)
            : Savings_Account {name, balance, int_rate}, bonus_amount{bonus_amount},
        bonus_min{bonus_min}, max_withdrawals{max_withdrawals},
        max_withdraw_pct{max_withdraw_pct}, num_withdrawals{0}
{
    
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account::deposit(double amount){
    if(amount >= bonus_min){
        amount += bonus_amount;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(num_withdrawals >= max_withdrawals ||
        amount > balance * (max_withdraw_pct / 100.0))
            return false;
    else{
        num_withdrawals++;
        return Savings_Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os << "[Trust Account: " << account.name << ": " << account.balance << ", "
        << account.int_rate << "%, withdrawals: " << account.num_withdrawals << "]";
    return os;
}
