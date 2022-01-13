#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus_amount = 50.0;
    static constexpr double def_bonus_min = 5000.0;
    static constexpr int def_max_withdrawals = 3;
    static constexpr double def_max_withdraw_pct = 20.0;
protected:
    int num_withdrawals;
    double bonus_amount;
    double bonus_min;
    int max_withdrawals;
    double max_withdraw_pct;
public:
    Trust_Account(
        std::string name = def_name, double balance = def_balance,
        double int_rate = def_int_rate, double bonus_amount = def_bonus_amount,
        double bonus_min = def_bonus_min, int max_withdrawals = def_max_withdrawals,
        double max_withdraw_pct = def_max_withdraw_pct);
    ~Trust_Account();
    
    bool deposit(double amount);
    
    bool withdraw(double amount);

};

#endif // TRUST_ACCOUNT_H
