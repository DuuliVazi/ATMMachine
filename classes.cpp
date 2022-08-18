#include <iostream>
#include <string>
#include "Account.h"

using namespace std;
/*This program is going to be structured like
this:
ACCOUNT CLASS
    *Keeps track of a balance
    *Holds a vector of Transaction objects
    *Deposit and Withdraw member functions
    DEPOSIT MEMBER FUNCTION:
        *Create a Transaction
        *Add it to the vector
        *Update the balance
    WITHDRAW:
        *You can't take out more than you have
        *Create a Transaction
        *Add it to a vector
        *Update the balance
    *Report function - collection of strings
    that calling code can print
TRANSACTION CLASS
    *Should have a date, but we'll ignore that
    for now
    *Holds an amount, and a transaction type
    (string for now)
    *Report function - string describing amount and
    type
*/

int main()
{
    Account a1;
    a1.Deposit(90);
    cout << "After depositing $90 "
         << "balance is " << a1.GetBalance() << '\n';
    for (auto s : a1.Report())
    {
        cout << s << '\n';
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100))
    {
        cout << "second withdraw succeeds" << '\n';
    }

    cout << "After withdrawing $50 then $100" << '\n';
    for (auto s : a1.Report())
    {
        cout << s << "\n";
    }

    return 0;
}

/*TO COMPILE THIS, YOU HAVE TO G++ ALL THE .CPP
FILES.
*/