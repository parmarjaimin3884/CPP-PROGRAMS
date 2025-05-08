#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_duplicate(const vector<int>& vec, int value) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == value) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> transaction_ids;
    int num_transactions, transaction_id;

    cout << "Enter the number of transaction IDs: ";
    cin >> num_transactions;

    cout << "Enter " << num_transactions << " transaction IDs:\n";
    for (int i = 0; i < num_transactions; ++i) {
        cin >> transaction_id;

        if (!is_duplicate(transaction_ids, transaction_id)) {
            transaction_ids.push_back(transaction_id);
        }
    }

    sort(transaction_ids.begin(), transaction_ids.end());

    cout << "\nUnique transaction IDs in sorted order:\n";
    for (int i = 0; i < transaction_ids.size(); ++i) {
        cout << transaction_ids[i] << " ";
    }
    cout << endl;

    return 0;
}
