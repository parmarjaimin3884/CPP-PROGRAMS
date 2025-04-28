#include <iostream>
using namespace std;

class Super_Digit {
private:
    string base_number;
    int repeat_count;

public:
    void get_input() {
        cout << "Enter number: ";
        cin >> base_number;
        cout << "Enter repeat count: ";
        cin >> repeat_count;
    }

    int digit_sum(string number) {
        int sum = 0;
        for (int i = 0; i < number.length(); i++) {
            sum += number[i] - '0';
        }
        return sum;
    }

    int find_super_digit(int number) {
        if (number < 10)
            return number;

        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }

        return find_super_digit(sum);
    }

    void show_result() {
        int initial_sum = digit_sum(base_number);
        int total_sum = initial_sum * repeat_count;
        int super_digit = find_super_digit(total_sum);
        cout << "Super Digit: " << super_digit << endl;
    }
};

int main() {
    Super_Digit sd;
    sd.get_input();
    sd.show_result();
    return 0;
}
