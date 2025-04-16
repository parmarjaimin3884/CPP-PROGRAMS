#include <iostream>
using namespace std;

class management_system {
    int pro_id;
    char pro_name[10];
    int pro_quantity = 1;
    int pro_price;
    int pro_total = 1;
    static int total;

public:

    void add_product() {
        cout << "Enter the Product Id: ";
        cin >> pro_id;
        cout << "Enter the Product Name: ";
        cin >> pro_name;
        cout << "Enter the price of product: ";
        cin >> pro_price;

        pro_total = pro_quantity * pro_price;
        total += pro_total;
    }

    void update_product(int id) {
        if (pro_id == id) {
            int x;
            cout << "Enter the quantity of product: ";
            cin >> x;
            pro_quantity += x;

            total -= pro_total;
            pro_total = pro_quantity * pro_price;
            total += pro_total;

            cout << "Updated total price of product is: " << pro_total << endl;
        } else {
            cout << "Product ID not found." << endl;
        }
    }

    void display_product() {
        cout << "Product ID: " << pro_id
             << ", Name: " << pro_name
             << ", Quantity: " << pro_quantity
             << ", Price: " << pro_price
             << ", Total: " << pro_total << endl;
    }

    static void display_total() {
        cout << endl << "Total price of all products: " << total << endl;
    }
};

int management_system::total = 0;

int main() {
    management_system a[2];

    for (int i = 0; i < 2; i++) {
        a[i].add_product();
    }

    int id;
    cout << "Enter the product ID you want to update: ";
    cin >> id;

    for (int i = 0; i < 2; i++) {
        a[i].update_product(id);
    }

    cout << "\nAll Products Details:\n";
    for (int i = 0; i < 2; i++) {
        a[i].display_product();
    }

    management_system::display_total();

    return 0;
}
