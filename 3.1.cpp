#include<iostream>
#include<string.h>
using namespace std;
class salary_management
{
    char emp_name[25];
    int basic_salary;
    int bonus_amt;
    int deafault_bonus;
    int total_salary;
    int n;
public:


        salary_management(char a[25],int salary,int bonus)
    {
       strcpy(emp_name,a);
        basic_salary=salary;
        bonus_amt=bonus;


        cout<<"Employee name is:"<<emp_name<<endl;
        cout<<"Employee basic salary is:"<<basic_salary<<endl;
        cout<<"Employee bonus salary is:"<<bonus_amt<<endl;
         deafault();





    }
    inline void deafault()
    {

        x:cout<<"press 1 for add deafault salary:";
        cin>>n;
        if(n==1)
        {
        cout<<"enter deafault salary(if you have get some another salary):";
        cin>>deafault_bonus;

            cal_salary();


        }
        else
        {
            cout<<"press 1 only"<<endl;
            goto x;
        }






    }
    inline void cal_salary()
    {
        total_salary = basic_salary+bonus_amt+deafault_bonus;
        cout<<"total salary is:"<<total_salary<<endl;
        cout<<endl;

    }


};
int main()
{

    salary_management j("jaimin",60000,20000);




}

