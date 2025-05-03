#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int MAX_WORDS = 100;
const int MAX_LENGTH = 20;

int main() {
    char paragraph[1000];
    char words[MAX_WORDS][MAX_LENGTH];
    int counts[MAX_WORDS] = {0};
    int wordCount = 0;

    cout << "Enter a paragraph:\n";
    cin.getline(paragraph, 1000);

    int len = strlen(paragraph);
    char temp[MAX_LENGTH];
    int tempIndex = 0;

    for (int i = 0; i <= len; ++i) {
        char ch = paragraph[i];
        if (isupper(ch)) ch = tolower(ch);

        if (isalpha(ch)) {
            if (tempIndex < MAX_LENGTH - 1) {
                temp[tempIndex++] = ch;
            }
        } else if (tempIndex > 0) {
            temp[tempIndex] = '\0';
            bool found = false;
            for (int j = 0; j < wordCount; ++j) {
                if (strcmp(words[j], temp) == 0) {
                    counts[j]++;
                    found = true;
                    break;
                }
            }
            if (!found && wordCount < MAX_WORDS) {
                strcpy(words[wordCount], temp);
                counts[wordCount] = 1;
                wordCount++;
            }
            tempIndex = 0;
        }
    }

    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < wordCount; ++i) {
        cout << words[i] << ": " << counts[i] << endl;
    }

    return 0;
}
