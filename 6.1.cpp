#include <iostream>
using namespace std;

class Dynamic_Array {
private:
    int* arr;
    int size;

public:
    Dynamic_Array() {
        arr = nullptr;
        size = 0;
    }

    ~Dynamic_Array() {
        delete[] arr;
    }

    void insert_at_end(int value) {
        int* new_arr = new int[size + 1];
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        new_arr[size] = value;
        delete[] arr;
        arr = new_arr;
        size++;
    }

    void delete_at_position(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n";
            return;
        }

        int* new_arr = new int[size - 1];
        for (int i = 0, j = 0; i < size; i++) {
            if (i == pos) continue;
            new_arr[j++] = arr[i];
        }

        delete[] arr;
        arr = new_arr;
        size--;
    }

    void print_array() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Dynamic_Array dynamic_array;
    int choice, value, pos;

    do {
        cout << "\n1. Insert at End\n2. Delete at Position\n3. Print Array\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                dynamic_array.insert_at_end(value);
                break;

            case 2:
                cout << "Enter position to delete (starting from 0): ";
                cin >> pos;
                dynamic_array.delete_at_position(pos);
                break;

            case 3:
                dynamic_array.print_array();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

