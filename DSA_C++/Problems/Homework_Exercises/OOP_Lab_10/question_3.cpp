#include <iostream>
using namespace std;

class Account
{
protected:
    int balance;
public:
    
    void setBalance(int bal)
    {
        cout<< "Enter Initial Balance: " << bal << '\n';
        balance = bal;
    }

    void showBalance()
    {
        cout<< "Final Balance: " << balance << '\n';
    }  
};

class Savings : protected Account
{
public:
    using Account::setBalance; // give access of this func in this class

    void deposit(int depositAmount)
    {
        cout<< "Deposit Amount: " << depositAmount << '\n';

        if (balance >= 0) balance += depositAmount;
           else cout<< "You're in negative!\n";
        
    }

    void withdraw(int withdrawAmount)
    {
        cout<< "Withdraw Amount: " << withdrawAmount << '\n';

        if (balance > 0) balance -= withdrawAmount;
           else cout<< "Insufficiant Balance!\n";
    }

    void display() 
    {
        showBalance();
    }
    
};

/*
    ================= Problem 3: Protected Inheritance =================
    1. Base Class: Account
        -> Data Members:
            . int balance
        -> Member Functions:
            . void setBalance(int)
            . void showBalance()
    2. Derived Class: Savings : protected Account
        -> Member Functions:
            . void deposit(int) – increase balance
            . void withdraw(int) – decrease balance
            . void display() – show final balance

    Program Requirements
    1. Implement protected inheritance.
    2. Observe that balance cannot be accessed directly from main().
    3. Perform deposit/withdraw operations through member functions.
*/

int main()
{
    Savings s;
    s.setBalance(1000);
    s.deposit(500);
    s.withdraw(200);
    cout<< '\n';
    s.display();


    return 0;
}