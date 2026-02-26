#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    // If string is not empty
    if(str.length() > 0) {
        count = 1;  // at least one word
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == ' ') {
                count++;
            }
        }
    }

    cout << "Number of words: " << count;

    return 0;
}