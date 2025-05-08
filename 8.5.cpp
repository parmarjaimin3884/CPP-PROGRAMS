#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;
    string folder, file;

    while (true) {
        cout << "1. Create Folder\n2. Add File\n3. Show Directory\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            cout << "Folder name: ";
            getline(cin, folder);

            if (directory.count(folder)) {
                cout << "Folder already exists.\n";
            } else {
                directory[folder];
                cout << "Folder created.\n";
            }

        } else if (choice == 2) {
            cout << "Folder name: ";
            getline(cin, folder);

            if (!directory.count(folder)) {
                cout << "Folder doesn't exist.\n";
            } else {
                cout << "File name: ";
                getline(cin, file);
                directory[folder].push_back(file);
                cout << "File added.\n";
            }

        } else if (choice == 3) {
            cout << "\n--- Directory ---\n";
            for (const auto& [folder_name, files] : directory) {
                cout << folder_name << ":\n";
                for (const auto& f : files) {
                    cout << "  " << f << '\n';
                }
            }

        } else if (choice == 4) {
            cout << "Goodbye!\n";
            break;

        } else {
            cout << "Invalid option.\n";
        }
    }

    return 0;
}
