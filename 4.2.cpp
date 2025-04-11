#include<iostream>
#include<string.h>
using namespace std;
class manager
{
    string department;
public:
    manager(string d)
    {
        department=d;
    }
    void display_dpt()
    {
        cout<<"Department is:"<<department<<endl;
            cout<<endl;

    }

};
class employee:public manager
{
    int id;
public:

    employee(int c,string d):manager(d)
    {
        id=c;

    }
    void display_emp()
    {
        cout<<"Id is:"<<id<<endl;
    }

};
class person:public employee
{
    string name;
    int age;
public:
    person(string a,int b,int c,string d):employee(c,d)
    {
        name=a;
        age=b;

    }
    void display_data()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;

    }


};
int main()
{
    person p1("jaimin",19,73,"CE");
    p1.display_data();
    p1.display_emp();
    p1.display_dpt();

    person p2("akshar",20,75,"CE");
    p2.display_data();
    p2.display_emp();
    p2.display_dpt();


}

