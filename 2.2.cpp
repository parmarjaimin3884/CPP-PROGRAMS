#include<iostream>
using namespace std;
class acadamic_data
{
    int roll_num;
    char name[25];
    float ccp,maths,d_e,avg;
public:

    void insert_data()
    {
        cout<<"Enter student roll number:";
        cin>>roll_num;
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter ccp marks :";
        cin>>ccp;
        cout<<"Enter maths marks :";
        cin>>maths;
        cout<<"Enter digital electronics marks :";
        cin>>d_e;



    }
    void calculate_avg()
    {
        avg = (ccp+maths+d_e)/3;
        cout<<avg<<endl;

    }
    void display_data()
    {
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"student roll number is:"<<roll_num<<endl;
        cout<<"student name is:"<<name<<endl;
        cout<<"student subject average is:"<<avg<<endl;
        cout<<"--------------------------------------------------------"<<endl;


    }

};
int main()
{
    acadamic_data A[2];
    int i;

    for(i=0; i<2; i++)
    {
        A[i].insert_data();
    }
    for(i=0; i<2; i++)
    {
        A[i].calculate_avg();

    }
    for(i=0; i<2; i++)
    {
        A[i].display_data();

    }


}
