#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Transaction
{
private:
    int amount;
    string type;

public:
    Transaction(int amt, string kind);
    string Report();
};