#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    // Constructor
    BankAccount(string accNumber, string name, double initialBalance) {
        accountNumber = accNumber;
        ownerName = name;
        balance = initialBalance;
    }

    // Deposit method
    bool deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }

    // Withdraw method
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    // Check balance method
    double checkBalance() {
        return balance;
    }

    // Get account number method
    string getAccountNumber() {
        return accountNumber;
    }

    // Get owner name method
    string getOwnerName() {
        return ownerName;
    }

    // Set owner name method
    void setOwnerName(string name) {
        ownerName = name;
    }
};

// Main function to test the class
int main() {
    // Create a BankAccount object
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    // Test deposit
    cout << "Depositing $500..." << endl;
    if (myAccount.deposit(500)) {
        cout << "Deposit successful. New balance: $" << myAccount.checkBalance() << endl;
    } else {
        cout << "Deposit failed." << endl;
    }

    // Test withdraw
    cout << "Withdrawing $300..." << endl;
    if (myAccount.withdraw(300)) {
        cout << "Withdrawal successful. New balance: $" << myAccount.checkBalance() << endl;
    } else {
        cout << "Withdrawal failed." << endl;
    }

    // Display account details
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Owner Name: " << myAccount.getOwnerName() << endl;
    cout << "Current Balance: $" << myAccount.checkBalance() << endl;

    // Change owner name
    myAccount.setOwnerName("Jane Doe");
    cout << "Updated Owner Name: " << myAccount.getOwnerName() << endl;

    return 0;
}
