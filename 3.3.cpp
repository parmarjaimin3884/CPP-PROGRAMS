#include <iostream>
using namespace std;

class money_system {
    char holder_name[25];
    long int balance;
    int acc_num = 0;
    int a_num;

public:
    void add_account() {
        cout << "Enter the holder Name : ";
        cin >>holder_name ;
        cout << "Enter the deposit Amount: ";
        cin >> balance;
         acc_num++;
        cout << "Your Bank Account number is : " << a_num << endl;
    }

    void deposit_amount() {
        cout << "Enter the Account number : ";
        cin >> a_num;
        int depo_amount;
        if (a_num == acc_num) {
            cout << "Enter the Deposit Amount : ";
            cin >> depo_amount;
            balance = balance + depo_amount;
            cout << "Now your Bank Balance is : " << balance << endl;
        }
    }

    void with_draw() {
        int with_amount;
        cout << "Enter the Account number : ";
        cin >> a_num;
        if (a_num == acc_num) {
            cout << "Enter the Withdraw Amount : ";
            cin >> with_amount;
            balance = balance - with_amount;
            cout << "Now your Bank Balance is : " << balance << endl;
        }
    }

    void Transper() {

    }
};

int main() {
    money_system m;
d:
    cout << "1. Add Account\n2. Deposit Amount\n3. Withdraw Amount\n4. Transfer Money Account\n";
    int choice;
    cout << "Enter the choice which you want : ";
    cin >> choice;
    switch (choice) {
        case 1:
            m.add_account();
            break;
        case 2:
            m.deposit_amount();
            break;
        case 3:
            m.with_draw();
            break;
        case 4:
            m.Transper();
            break;
        default:
            cout << "Invalid Choice !! Please Enter the Right Choice." << endl;
            goto d;
    }
    goto d;
    return 0;
}
