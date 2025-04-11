#include<iostream>
#include<string.h>
using namespace std;
class brand
{
    string brand_name;
public:
    brand(string y)
    {
        brand_name=y;
    }
    void display_data1()
    {
        cout<<"Brand name is:"<<brand_name<<endl;
    }

};
class fuel_type
{
    string fuel;
public:
    fuel_type(string z)
    {
        fuel=z;
    }
    void display_data2()
    {
        cout<<"Fuel type is:"<<fuel<<endl;
    }

};
class cars:public brand,public fuel_type
{
    string company_name;
public:
     cars(string x,string y,string z):brand(y),fuel_type(z)
    {
        company_name=x;

    }
    void display_data3()
    {
        cout<<"Company name is:"<<company_name<<endl;
    }

};

int main()
{
    cars c("hundai","verna","petrol");
        c.display_data3();

    c.display_data1();
        c.display_data2();







}
