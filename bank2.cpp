#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string name, int accNumber, string accType, double initialBalance)
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance > 0 ? initialBalance : 0.0; // Ensure balance is non-negative
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        }
        else if (amount > 0)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to display name and balance
    void displayAccountInfo() const
    {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Balance: $" << balance << endl;
    }
};

int main()
{
    // Create a bank account
    BankAccount account("samarth joshi", 123456789, "Savings", 1000.0);

    // Display account information
    account.displayAccountInfo();
    cout << endl;

    // Deposit an amount
    account.deposit(500.0);
    account.displayAccountInfo();
    cout << endl;

    // withdraw an amount
    account.withdraw(200.0);
    account.displayAccountInfo();
    cout << endl;

    //  withdraw an amount exceeding balance
    account.withdraw(2000.0);
    account.displayAccountInfo();
    cout << endl;

    return 0;
}
