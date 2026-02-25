#include <iostream>
using namespace std;

int main() {
    string str;
    int words = 0, consonants = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    // Count words
    if(str.length() > 0)
        words = 1;

    for(int i = 0; i < str.length(); i++) {
        
        // Word count (space ke basis par)
        if(str[i] == ' ')
            words++;

        // Consonant check
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char ch = tolower(str[i]);

            if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
                consonants++;
        }
    }

    cout << "Words = " << words << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}