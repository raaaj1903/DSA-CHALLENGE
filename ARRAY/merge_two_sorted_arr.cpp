#include <iostream>
using namespace std;

void mergeSortedArrays(int a[], int n, int b[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }

    // Remaining elements of a[]
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    // Remaining elements of b[]
    while (j < m) {
        cout << b[j] << " ";
        j++;
    }
}

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    mergeSortedArrays(a, n, b, m);

    return 0;
}
