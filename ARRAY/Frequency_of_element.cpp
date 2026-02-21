#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> freq;

    // count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // print frequency
    for(auto x : freq) {
        cout << x.first << " occurs " << x.second << " times" << endl;
    }

    return 0;
}