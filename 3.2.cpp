#include <iostream>

using namespace std;

class Array_Sum {
private:
    int* numbers;
    int size;

public:
    void get_input() {
        cout << "Enter size of array: ";
        cin >> size;

        numbers = new int[size];

        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
    }

    int recursive_sum(int index) {
        if (index < 0)
            return 0;
        return numbers[index] + recursive_sum(index - 1);
    }

    void show_result() {
        int total = recursive_sum(size - 1);
        cout << "Sum: " << total << endl;
    }

    ~Array_Sum() {
        delete[] numbers;
    }
};

int main() {
    Array_Sum arr;
    arr.get_input();
    arr.show_result();
    return 0;
}
