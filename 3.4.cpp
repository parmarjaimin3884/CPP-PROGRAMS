#include <iostream>

using namespace std;

class Int_Array {
private:
    int* data_array;
    int array_size;

public:
    void get_input() {
        cout << "Enter array size: ";
        cin >> array_size;

        data_array = new int[array_size];

        cout << "Enter " << array_size << " numbers:\n";
        for (int i = 0; i < array_size; i++) {
            cin >> data_array[i];
        }
    }

    void display_array() {
        cout << "Array: ";
        for (int i = 0; i < array_size; i++) {
            cout << data_array[i] << " ";
        }
        cout << endl;
    }

    void find_max() {
        int max_value = data_array[0];
        for (int i = 1; i < array_size; i++) {
            if (data_array[i] > max_value) {
                max_value = data_array[i];
            }
        }
        cout << "Maximum value: " << max_value << endl;
    }

    void reverse_array() {
        for (int i = 0; i < array_size / 2; i++) {
            int temp = data_array[i];
            data_array[i] = data_array[array_size - 1 - i];
            data_array[array_size - 1 - i] = temp;
        }
    }

    ~Int_Array() {
        delete[] data_array;
    }
};

int main() {
    Int_Array my_array;
    my_array.get_input();
    my_array.display_array();
    my_array.find_max();
    my_array.reverse_array();
    cout << "Reversed ";
    my_array.display_array();
    return 0;
}
