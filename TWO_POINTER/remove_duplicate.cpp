#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    if (N == 0) return 0;

    int k = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }

    // unique elements print
    for (int i = 0; i <= k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}