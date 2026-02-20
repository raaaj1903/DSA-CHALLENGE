#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> m; // value → index

    for(int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];

        if(m.find(complement) != m.end()) {
            cout << "Indices: " << m[complement] << " and " << i;
            return 0;
        }

        m[arr[i]] = i;
    }

    cout << "No pair found";
    return 0;
}