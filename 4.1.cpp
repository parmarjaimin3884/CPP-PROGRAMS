#include<iostream>
using namespace std;
class circle
{
    float r;
public:
    void insert_radius()
    {
        cout<<"Enter R:";
        cin>>r;
    }
};
class area:private circle
{
    float area;
public:
    void cal_area()
    {
        area=(3.14*r*r);
        cout<<area;
    }
};
int main()
{
    area a1;

    a1.insert_radius();
    a1.cal_area();
}
