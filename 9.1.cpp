#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

double get_valid_number(const string& prompt) {
    string input;
    double number;

    while (true) {
        cout << prompt;
        getline(cin, input);
        stringstream ss(input);

        if (ss >> number && !(ss >> input) && number >= 0) {
            return number;
        } else {
            cout << "Invalid input. Please enter a valid number.\n";
        }
    }
}

int main() {
    double loan_amount, annual_income, ratio;


    loan_amount = get_valid_number("Enter loan amount: ");

    while (true) {
        annual_income = get_valid_number("Enter annual income: ");
        if (annual_income == 0) {
            cout << "Income cannot be zero. Please try again.\n";
        } else {
            break;
        }
    }

    ratio = loan_amount / annual_income;

    cout << fixed << setprecision(2);
    cout << "Loan-to-Income Ratio: " << ratio << endl;

    return 0;
}
