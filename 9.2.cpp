
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
    string account_holder;
    double balance;
    vector<string> transaction_log;

    void log_transaction(const string& message) {
        transaction_log.push_back(message);
    }

public:
    BankAccount(const string& name, double initial_balance) {
        account_holder = name;
        balance = initial_balance;
        log_transaction("Account created with balance: " + to_string(balance));
    }

    void deposit(double amount) {
        if (amount <= 0) {
            log_transaction("Failed deposit attempt: Invalid amount " + to_string(amount));
            cout << "Deposit amount must be positive.\n";
            return;
        }
        balance += amount;
        log_transaction("Deposited: " + to_string(amount));
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            log_transaction("Failed withdrawal attempt: Invalid amount " + to_string(amount));
            cout << "Withdrawal amount must be positive.\n";
            return;
        }
        if (amount > balance) {
            log_transaction("Failed withdrawal attempt: Insufficient balance for " + to_string(amount));
            cout << "Error: Insufficient balance.\n";
            return;
        }
        balance -= amount;
        log_transaction("Withdrew: " + to_string(amount));
    }

    void show_balance() const {
        cout << "Current balance: " << balance << "\n";
    }

    void show_transaction_log() const {
        cout << "\n--- Transaction Log ---\n";
        for (const string& entry : transaction_log) {
            cout << entry << endl;
        }
    }
};

int main() {
    string account_name;
    double initial_balance;

    cout << "Enter account holder's name: ";
    getline(cin, account_name);

    cout << "Enter initial balance: ";
    cin >> initial_balance;

    BankAccount user_account(account_name, initial_balance);

    int choice;
    double amount;

    while (true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Show Transaction Log\n5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                user_account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                user_account.withdraw(amount);
                break;

            case 3:
                user_account.show_balance();
                break;

            case 4:
                user_account.show_transaction_log();
                break;

            case 5:
                cout << "Thank you for using the banking system.\n";
                return 0;

            default:
                cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
