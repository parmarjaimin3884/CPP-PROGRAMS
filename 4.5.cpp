
#include<iostream>
using namespace std;
class grading_framework
{
protected:
    float m1,m2,m3;
public:
        virtual int insert_data(float a,float b,float c)=0;


};
class ug:public grading_framework
{
    float per;
public:
    int insert_data(float a,float b,float c)
    {
        m1=a;
        m2=b;
        m3=c;

    }
    void cal_per()
    {
        per=(m1+m2+m3)/3;
        if(per>45.0)
        {
            cout<<"for ug student:"<<endl;
             cout<<"percentage is:"<<per<<endl;
            cout<<"congratulations, you are pass."<<endl;

        }
        else
        {
                        cout<<"for ug student:"<<endl;

             cout<<"percentage is:"<<per<<endl;
            cout<<"sorry! you are failed."<<endl;

        }
                    cout<<endl;


    }
};
class pg:public grading_framework
{
    float per1;
public:
    int insert_data(float a,float b,float c)
    {
        m1=a;
        m2=b;
        m3=c;

    }
    void cal_per()
    {
        per1=(m1+m2+m3)/3;
        if(per1>45.0)
        {
                                    cout<<"for pg student:"<<endl;


            cout<<"percentage is:"<<per1<<endl;
            cout<<"congratulations, you are pass."<<endl;

        }
        else
        {
                                    cout<<"for pg student:"<<endl;

            cout<<"percentage is:"<<per1<<endl;
            cout<<"sorry! you are failed."<<endl;

        }

    }


};
int main()
{
    ug u;
    u.insert_data(99,45,78);
    u.cal_per();

    pg p;
    p.insert_data(45,46,50.3);
    p.cal_per();


}
