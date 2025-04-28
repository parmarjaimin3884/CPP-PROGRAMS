    #include <iostream>
using namespace std;

class Bank_Account {
protected:
    int account_number;
    float balance;

public:
    Bank_Account(int acc_num, float initial_balance) {
        account_number = acc_num;
        balance = initial_balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Not enough balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void show_balance() {
        cout << "Account Number: " << account_number << ", Balance: " << balance << endl;
    }
};

class Savings_Account : public Bank_Account {
public:
    Savings_Account(int acc_num, float initial_balance)
        : Bank_Account(acc_num, initial_balance) {}
};

class Current_Account : public Bank_Account {
public:
    Current_Account(int acc_num, float initial_balance)
        : Bank_Account(acc_num, initial_balance) {}
};

int main() {
    Savings_Account sa(101, 1000);
    sa.deposit(500);
    sa.withdraw(200);
    sa.show_balance();

    cout << endl;

    Current_Account ca(102, 2000);
    ca.deposit(1000);
    ca.withdraw(2500);
    ca.show_balance();

    return 0;
}
