#include <iostream>
#include <math.h>

using namespace std;

class EMI_Calculator {
private:
    double loan_amount;
    double annual_interest_rate;
    int loan_tenure_months;
    double emi;

public:
    void get_input() {
        cout << "Enter Loan Amount: ";
        cin >> loan_amount;

        cout << "Enter Annual Interest Rate (in %): ";
        cin >> annual_interest_rate;

        cout << "Enter Loan Tenure (in months): ";
        cin >> loan_tenure_months;
    }

    void calculate_emi() {
        double R = (annual_interest_rate / 12) / 100;
        double P = loan_amount;
        int T = loan_tenure_months;

        if (R == 0) {
            emi = P / T;
        } else {
            emi = (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
        }

        emi = ((int)(emi * 100 + 0.5)) / 100.0;
    }

    void show_emi() {
        cout << "Monthly EMI: " << emi << endl;
    }
};

int main() {
    EMI_Calculator loan;
    loan.get_input();
    loan.calculate_emi();
    loan.show_emi();

    return 0;
}
