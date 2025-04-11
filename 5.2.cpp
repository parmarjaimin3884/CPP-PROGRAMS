#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    void insert_data()
    {
        cout<<"Enter real value:";
        cin>>x;
        cout<<"Enter imaginary value:";
        cin>>y;

    }
    complex operator+(complex &c)
    {
        complex a;
        a.x=x+c.x;
        a.y=y+c.y;
        return a;

    }
    complex operator-(complex &k)
    {
        complex b;
        b.x=x-k.x;
        b.y=y-k.x;
        return b;
    }
    void display_data()
    {
        cout<<x;
        if(y>=0)
        {
            cout<<"+";
        }
        cout<<y<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3,c4;
    c1.insert_data();
    c2.insert_data();
    c3=c1+c2;
    c4=c1-c2;
    c3.display_data();
    c4.display_data();

}

