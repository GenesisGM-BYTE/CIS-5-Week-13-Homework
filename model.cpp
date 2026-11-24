#include <iostream>
#include <string>

// Genesis Martinez
// CIS 5 Week 13 - Part 2

struct Account
{
    std::string name;
    double balance;
};

void printAccount(const Account& a)
{
    std::cout << a.name << " " << a.balance << std::endl;
}

int main()
{
    Account account1 = {"Ada", 50.25};
    Account account2 = {"Ben", 120.5};

    printAccount(account1);
    printAccount(account2);

    return 0;
}
