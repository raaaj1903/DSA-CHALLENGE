#include <iostream>
using namespace std;

// Function to calculate sum of even and odd numbers in array
void sumEvenOdd(int arr[], int n, int &evenSum, int &oddSum) {
    evenSum = 0;
    oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];   // even number
        } else {
            oddSum += arr[i];    // odd number
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int evenSum, oddSum;
    sumEvenOdd(arr, n, evenSum, oddSum);

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
