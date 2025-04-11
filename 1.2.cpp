#include<iostream>
using namespace std;

class ManagementSystem {
    int ProId;
    char ProName[25];
    int ProQuantity = 1;
    int ProPrice;
    int ProTotal = 1;
    int Total=0;

public:
    void AddProduct();
    void UpdateProduct(int id);
};

void ManagementSystem::AddProduct() {
    cout << "Enter the Product Id: ";
    cin >> ProId;
    cout << "Enter the Product Name: ";
    cin >> ProName;
    cout << "Enter the price of product: ";
    cin >> ProPrice;
}

void ManagementSystem::UpdateProduct(int id) {
    if (ProId == id) {
        int x;
        cout << "Enter the quantity of product: ";
        cin >> x;
        ProQuantity += x;
        ProTotal = ProQuantity * ProPrice;
        cout << "Your total price of product is: " << ProTotal << endl;
    }
    else{
        cout<<"Sorry";
    }
}


int main() {
    ManagementSystem A[2];

    for (int i = 0; i < 2; i++) {
        A[i].AddProduct();
        cout << "--------------------" << endl;
    }

    int id;
    cout << "Enter the product ID you want to update: ";
    cin >> id;

    for (int i = 0; i < 2; i++) {
        A[i].UpdateProduct(id);
    }
    for(int i=0;i<2;i++)
    {
        A[i].Total();
    }

    return 0;
}
