/*Design a simple class BankAccount to represent a bank account. It should have
the following:
Attributes:
o Account holder's name, account number, and balance.
Methods:
o deposit(amount): to add money to the account.
o withdraw(amount): to deduct money from the account if sufficient balance
exists. Otherwise, print an error message.
o display_balance() to show the current balance.
Requirements:
o Demonstrate object-oriented principles: encapsulation and abstraction.
o Test the class by creating multiple accounts and performing operations.*/
#include<iostream>
using namespace std;
class bank_acc
{
    char name[25];
    double acc_num;
    double acc_balance;
public:
    void insert_profile()
    {
        cout<<"Enter account Holder name :";
        cin >> name;
        cout<<"Enter account number :";
        cin>>acc_num;
        cout<<"Enter ccount balance :";
        cin >> acc_balance;

    }
    double deposit(double x)
    {
        cout << "Enter deposit amount:";
        cin >> x;

        acc_balance=acc_balance + x;
        return 1;
    }
    double withdraw(double y)
    {
         cout << "Enter withdraw amount:";
        cin >> y;

        acc_balance=acc_balance - y;
        return 1;
    }
    void invalid_input()
    {
        if(acc_balance<=0)
        {
            cout<<"YOU HAVE UNSUFFICIENT BALANCE IN YOUR ACCOUNT"<<endl;
        }
    }
    void display_amount()
    {
        cout<<"the total ammount is:"<<endl<<acc_balance;
    }


};
int main()
{
    bank_acc B[2];
    int i;
    double depo;
    double withdraw;
    for(i=0; i<2; i++)
    {
        B[i].insert_profile();
    }
    for(i=0; i<2; i++)
    {

        B[i].deposit(depo);
    }
    for(i=0; i<2; i++)
    {

        B[i].withdraw(withdraw);
    }
     for(i=0; i<2; i++)
    {
        B[i].invalid_input();
    }
    for(i=0; i<2; i++)
    {
        B[i].display_amount();
    }
}
