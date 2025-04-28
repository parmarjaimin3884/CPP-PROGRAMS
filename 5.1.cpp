
#include<iostream>
using namespace std;

class calculator
{
    int x, y, c;
    float p, q, r;
public:
    void add(int a, int b)
    {
        x = a;
        y = b;
        c = x + y;
    }
    void add(float c1, float d1)
    {
        p = c1;
        q = d1;
        r = p + q;
    }
    void display()
    {
        cout << "int ans: " << c << endl;
        cout << "float ans: " << r << endl;
    }
};

int main()
{
    calculator c1;
    c1.add(1, 2);
    c1.add(2.3f, 4.5f);
    c1.display();
}

