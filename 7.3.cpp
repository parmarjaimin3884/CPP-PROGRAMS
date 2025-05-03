#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Product {
    char name[50];
    int quantity;
    float price;
};

void add_product(const char* filename) {
    Product product;
    cout << "Enter product name: ";
    cin.ignore();
    cin.getline(product.name, 50);
    cout << "Enter quantity: ";
    cin >> product.quantity;
    cout << "Enter price: ";
    cin >> product.price;

    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }

    file << product.name << "," << product.quantity << "," << product.price << endl;
    file.close();
    cout << "Product added successfully.\n";
}

void view_inventory(const char* filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading.\n";
        return;
    }

    Product product;
    cout << "\nInventory:\n";
    while (file.getline(product.name, 50, ',')) {
        file >> product.quantity;
        file.ignore();
        file >> product.price;
        file.ignore();

        cout << "Name: " << product.name
             << ", Quantity: " << product.quantity
             << ", Price: " << product.price << endl;
    }

    file.close();
}

void search_product(const char* filename) {
    char search_name[50];
    cout << "Enter product name to search: ";
    cin.ignore();
    cin.getline(search_name, 50);

    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading.\n";
        return;
    }

    Product product;
    bool found = false;
    while (file.getline(product.name, 50, ',')) {
        file >> product.quantity;
        file.ignore();
        file >> product.price;
        file.ignore();

        if (strcmp(product.name, search_name) == 0) {
            cout << "Product found:\n";
            cout << "Name: " << product.name
                 << ", Quantity: " << product.quantity
                 << ", Price: " << product.price << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Product not found.\n";
    }

    file.close();
}

int main() {
    const char* filename = "inventory_management.txt";
    int choice;

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: add_product(filename); break;
            case 2: view_inventory(filename); break;
            case 3: search_product(filename); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
