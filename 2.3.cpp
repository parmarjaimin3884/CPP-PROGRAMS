#include<iostream>
using namespace std;
class bank_mangement_system
{
    char acc_holdername[25];
    long acc_num;
    float current_bal;

    public :
    void create_acc()
    {
        cout<<"Enter account holder name :";
        cin>>acc_holdername;
        cout<<"Enter account number :";
        cin>>acc_num;

    }
    void deposite_money(float x)
    {

        current_bal = current_bal + x;
    }
    void withdraw_money(float y)
    {
        current_bal = current_bal - y;
    }
    void display_acc_details()
    {
        cout<<"Account detail is:"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Account holder name is:"<<acc_holdername<<endl;
        cout<<"Account number is:"<<acc_num<<endl;
        cout<<"Total Amount in your Account is:"<<current_bal<<endl;
    }

};
int main()
{
    bank_mangement_system B[2];
    int i;
    float depo,withdraw;
        for(i=0;i<2;i++)
    {
        B[i].create_acc();
    }
    for(i=0;i<2;i++)
    {
        cout<<"Enter deposite value: ";
        cin>>depo;

        B[i].deposite_money(depo);
    }
    for(i=0;i<2;i++)
    {
        cout<<"Enter withdraw value: ";
        cin>>withdraw;

        B[i].deposite_money(withdraw);

    }
    for(i=0;i<2;i++)
    {
      B[i].display_acc_details();

    }
}
