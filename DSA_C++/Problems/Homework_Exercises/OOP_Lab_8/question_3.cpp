#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
    float amountDeposit, amountWithdraw;
public:
    void inputData()
    {
        cout<< "Enter Account Number: ";
        cin>> accountNumber;

        cout<< "Enter Initial Balance: ";
        cin>> balance;

        cout<< "Enter amount to deposit: ";
        cin>> amountDeposit;

        cout<< "Enter amount to withdraw: ";
        cin>> amountWithdraw;

    }

    void deposit()
    {
        if (balance < 0) cout<< "You're in negative!\n";
            balance += amountDeposit;
    }

    void withdraw()
    {
        if (balance <=0) cout<< "Insuficiant Balance!\n\n";
            balance -= amountWithdraw;
    }

    void display()
    {
        deposit();
        withdraw();
        cout<< "Final Balance: " << balance << '\n';
    }

    BankAccount(int accNum = 0, float bal = 0, float amoDep = 0, float amoWith = 0) : accountNumber(accNum), balance(bal), amountDeposit(amoDep), amountWithdraw(amoWith) {}

   
};


/*
    ================= Problem 3 =================
    Develop a C++ program to implement Data Abstraction, showing how internal details are hidden from the user.
    1. Class: BankAccount
        -> Private Data Members:
            . int accountNumber
            . float balance
        -> Public Member Functions:
            . void deposit(float amount);
            . void withdraw(float amount);
            . void displayBalance();
        -> Constructors:
            . Parameterized Constructor — to set account number and initial balance.
    2. Input: Account number, initial balance, deposit, and withdrawal amounts.
    3. Output: Show updated balance using abstraction.
*/

int main()
{
    BankAccount b1;
    b1.inputData();
    b1.display();

    return 0;
}