#include <iostream>
#include <string>
using namespace std;

// 1
class BankAccount
{
private:
    string accountHolder;
    double balance;
public:
    // 2
    void setName(string accountHolder) { this->accountHolder = accountHolder; }
    string getName() { return accountHolder; }
    double getBalance() { return balance; }

    // 3
    void depositAmount(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout<< "Deposit Successfull! New Balance: " << getBalance() << '\n';
        }
        else
        {
            cout<< "Invalid Deposit Amount!" << '\n';
        }
        
    }
    
    void widthAmount(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout<< "Withdraw Successfull! New Balance: " << getBalance() << '\n';
        }
        else
        {
            cout<< "Insuficiant Balance!"<< '\n';
        }
        
    }

    BankAccount(double initialBal = 0)
    {
        balance = initialBal;
    }
    
};


/*
    ================= Problem 6: Access and Utility Fucntion =================
    Create a C++ program:
    1. Make a class BankAccount with private members: accountHolder, balance.
    2. Write access functions (setName, getName, getBalance).
    3. Write a utility function deposit(amount) and withdraw(amount) with simple balance checks.
    4. (Take input from user for name, initial balance, then deposit and withdraw).
    */

int main()
{    
    // 4
    string accountHolder;
    double intialbalance, depositAmount, withdrawAmount;

    cout<< "Enter Account Holder: ";
    getline(cin, accountHolder);
    

    cout<< "Enter Initial Balance: ";
    cin>>intialbalance;
    BankAccount account(intialbalance);
    account.setName(accountHolder);

    cout<< '\n';

    cout<< "Enter deposit amount: ";
    cin>>depositAmount;
    account.depositAmount(depositAmount);

    cout<< '\n';

    cout<< "Enter withdraw amount: ";
    cin>>withdrawAmount;
    account.widthAmount(withdrawAmount);

    return 0;
}