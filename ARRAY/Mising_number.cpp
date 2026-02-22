#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (total numbers including missing): ";
    cin >> n;

    int arr[n-1];
    cout << "Enter array elements: ";

    int actualSum = 0;

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    cout << "Missing number = " << expectedSum - actualSum;

    return 0;
}