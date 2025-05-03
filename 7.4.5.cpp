#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream infile("students.txt");

    if (!infile) {
        cerr << "Error: Could not open the file.\n";
        return 1;
    }

    string name;
    double marks;
    char grade;
    double fee;

    cout << "=== Student Report ===\n";
    cout << left << setw(20) << "Name"
         << right << setw(10) << "Marks"
         << setw(10) << "Grade"
         << setw(15) << "Tuition Fee\n";
    cout << string(55, '-') << endl;

    while (getline(infile, name, ',')) {
        infile >> marks >> grade >> fee;
        infile.ignore(1000, '\n');

        cout << left << setw(20) << name
             << right << setw(10) << fixed << setprecision(2) << marks
             << setw(10) << grade
             << setw(10) << "Rs."
             << setw(5)  << fixed << setprecision(2) << fee << endl;
    }

    infile.close();
    return 0;
}

