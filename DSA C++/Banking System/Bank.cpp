#include <iostream>
#include <string>
using namespace std;


class BankAccount {
protected:
    string accountHolder;
    int accountNumber;
    double balance;
    double interestRate;

public:
    
    BankAccount(string holder, int accNumber, double initialBalance, double rate) {
        accountHolder = holder;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    // deposit 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // witdraw 
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // apply 
    void applyInterest() {
        balance += (balance * interestRate / 100.0);
    }

    // balance chek
    void checkBalance() const {
        cout << "Current Balance: " << balance << endl;
    }

    // acc detail
    virtual void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolder << "\nAccount Number: " << accountNumber
             << "\nCurrent Balance: " << balance << "\nAnnual Interest Rate: " << interestRate << "%" << endl;
    }

    virtual ~BankAccount() {}
};

// derived Class: CheckingAccount
class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    
    CheckingAccount(string holder, int accNumber, double initialBalance, double limit)
        : BankAccount(holder, accNumber, initialBalance, 0.0), overdraftLimit(limit) {}

    // check overdraft
    void checkOverdraft(double amount) const {
        if (amount > balance + overdraftLimit) {
            cout << "Overdraft limit exceeded!" << endl;
        } else {
            cout << "Withdrawal approved." << endl;
        }
    }

    // acc detail
    void displayAccountDetails() const override {
        BankAccount::displayAccountDetails();
        cout << "Account Type: Checking\nOverdraft Limit: " << overdraftLimit << endl;
    }
};

// derived Class: FixedDepositAccount
class FixedDepositAccount : public BankAccount {
private:
    int term; 

public:
   
    FixedDepositAccount(string holder, int accNumber, double initialBalance, double rate, int termDuration)
        : BankAccount(holder, accNumber, initialBalance, rate), term(termDuration) {}

    // calculate interest
    void calculateInterest() const {
        double interest = balance * (interestRate / 100.0) * (term / 12.0);
        cout << "Fixed Deposit Interest Earned: " << interest << endl;
    }

    // acc detail
    void displayAccountDetails() const override {
        BankAccount::displayAccountDetails();
        cout << "Account Type: Fixed Deposit\nTerm Duration: " << term << " months" << endl;
    }
};


int main() {
    int accountType;
    string holderName;
    int accNumber;
    double initialBalance, interestRate, overdraftLimit;
    int termDuration;

    cout << "Choose account type:\n1. Checking Account\n2. Fixed Deposit Account\n";
    cout << "Enter your choice: ";
    cin >> accountType;

    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, holderName);

    cout << "Enter account number: ";
    cin >> accNumber;

    cout << "Enter initial deposit amount: ";
    cin >> initialBalance;

    if (accountType == 1) {
        cout << "Enter overdraft limit: ";
        cin >> overdraftLimit;

        // create Checking Account
        CheckingAccount account(holderName, accNumber, initialBalance, overdraftLimit);

        int choice;
        double amount;

        do {
            cout << "\nBanking System Menu:\n";
            cout << "1. Display Account Details\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Check Balance\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    account.displayAccountDetails();
                    break;
                case 2:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    account.deposit(amount);
                    break;
                case 3:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    account.withdraw(amount);
                    break;
                case 4:
                    account.checkBalance();
                    break;
                case 5:
                    cout << "Exiting the system. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        } while (choice != 5);

    } else if (accountType == 2) {
        cout << "Enter annual interest rate (in %): ";
        cin >> interestRate;

        cout << "Enter term duration (in months): ";
        cin >> termDuration;

        // create Fixed Deposit Account
        FixedDepositAccount account(holderName, accNumber, initialBalance, interestRate, termDuration);

        int choice;

        do {
            cout << "\nBanking System Menu:\n";
            cout << "1. Display Account Details\n";
            cout << "2. Calculate Interest\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    account.displayAccountDetails();
                    break;
                case 2:
                    account.calculateInterest();
                    break;
                case 3:
                    cout << "Exiting the system , Thank you for using our system." << endl;
                    break;
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        } while (choice != 3);

    } else {
        cout << "Invalid account type selected!" << endl;
    }

    return 0;
}