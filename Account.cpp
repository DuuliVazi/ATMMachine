#include "Account.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Account::Account() is the member function.
And balance is the member variable.
*/
Account::Account() : balance(0), limit(100)
{
}
/*The whole vector<string> Account::Report()
is the member function.
*/
vector<string> Account::Report()
{
    vector<string> report;

    report.push_back("Balance is " + to_string(balance));
    report.push_back("Tranxsactions: ");

    for (auto t : log)
    {
        report.push_back(t.Report());
    }

    report.push_back("-----------------");

    return report;
}

bool Account::Deposit(int amount)
{
    if (amount >= 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        balance -= 1;
        log.push_back(Transaction(1, "Service Charge"));
        return true;
    }
    else
    {
        return false;
    }
}

bool Account::Withdraw(int amount)
{
    if (amount <= 0)
    {
        return false;
    }

    /*For instance, if you have $100 and the 
    limit is $50, then you can withdraw up to
    $150.
    */
    if ((balance + limit) >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        balance -= 1;
        log.push_back(Transaction(1, "Service Charge"));
        return true;
    }
    return false;
}