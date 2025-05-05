#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence:\n";
    getline(cin, sentence);

    map<string, int> word_frequency;

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        ++word_frequency[word];
    }

    cout << "\n=== Word Frequency ===\n";
    for (const auto& pair : word_frequency) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}

