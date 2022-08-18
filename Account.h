#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"

using namespace std;

class Account
{
    /*Private variables can only be used
     from member functions.
    */
private:
    int balance;
    //Creates limit for how much you can withdraw.
    int limit;
    /*log is a vector of transactions because it's 
    keeping a hold of the transactions all the way
    to the end. 
    */
    vector<Transaction> log;
public:
    /*No return type as it's a constructor 
    for the class
    */
    Account();
    vector<string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance() {return balance;}
};