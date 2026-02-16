#include <iostream>
using namespace std;

// Function to find HCF (GCD)
int findHCF(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF = " << findHCF(num1, num2) << endl;
    cout << "LCM = " << findLCM(num1, num2);

    return 0;
}
