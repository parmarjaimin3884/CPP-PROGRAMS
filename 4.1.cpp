#include<iostream>
using namespace std;

class circle {
protected:
    float r;
public:
    void insert_radius() {
        cout << "Enter R: ";
        cin >> r;
    }
};

class area : public circle {
    float area_value;
public:
    void cal_area() {
        area_value = (3.14 * r * r);
        cout << "Area: " << area_value;
    }
};

int main() {
    area a1;

    a1.insert_radius();
    a1.cal_area();

    return 0;
}
