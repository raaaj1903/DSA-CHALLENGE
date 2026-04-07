#include <bits/stdc++.h>
using namespace std;

// Check if string is palindrome
// Ignore non-alphanumeric characters & case sensitivity
bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // compare characters (case insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}