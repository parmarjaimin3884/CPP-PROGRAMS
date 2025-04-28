#include<iostream>
using namespace std;

class celcius {
    float temp;

public:
    void insert_data() {
        cout << "Enter a temperature: ";
        cin >> temp;
    }

    void convert_c_to_f() {
        cout << "Celsius temperature: " << temp << endl;
        temp = (temp * 9.0/5.0) + 32;  // fixed division
        cout << "Fahrenheit temperature: " << temp << endl;
    }

    float get_celcius() {
        return temp;
    }
};

class fahrenhit {
    float t;

public:
    void get_data() {
        cout << "Enter a Fahrenheit value: ";
        cin >> t;
    }

    void convert_f_to_c() {
        cout << "Fahrenheit temperature: " << t << endl;
        t = (t - 32) * (5.0/9.0); // fixed division
        cout << "Celsius temperature: " << t << endl;
    }
};

int main() {
    celcius c;
    fahrenhit f;
n:
    cout << "Press 1 for Celsius\nPress 2 for Fahrenheit\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
        {
            c.insert_data();
            c.convert_c_to_f();
            break;
        }

        case 2:
        {
            f.get_data();
            f.convert_f_to_c();
            break;
        }

        default:
        {
            goto e;
            break;
        }
    }
    goto n;
e:
    return 0;
}
