#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        // check if character is lowercase
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    cout << "Uppercase string: " << str;

    return 0 ;
}