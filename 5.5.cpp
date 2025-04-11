#include<iostream>
using namespace std;
class shape
{
public:

    virtual void area()=0;
};
class rectangle
{
    float l,w,area;
public:
    void insert_data()
    {
        cout<<"Enter length:";
        cin>>l;
        cout<<"Enter width:";
        cin>>w;
    }
    void cal_area()
    {
        area=l*w;
    }
    void display_data()
    {
        cout<<"Area of rectangle:"<<area;
    }

};
class circle
{
    float r,area;
public:
    void insert_data()
    {
        cout<<"Enter radius";
        cin>>r;
    }
    void cal_area()
    {
        area=3.14*r*r;
    }
     void display_data()
    {
        cout<<"Area of circle:"<<area;
    }

};
int main()
{
    rectangle r1;
    r1.insert_data();
    r1.cal_area();
    r1.


}
