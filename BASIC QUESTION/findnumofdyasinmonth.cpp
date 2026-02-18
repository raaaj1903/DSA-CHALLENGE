#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Number of days = 31";
            break;

        case 4: case 6: case 9: case 11:
            cout << "Number of days = 30";
            break;

        case 2:
            // Leap year check
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                cout << "Number of days = 29";
            else
                cout << "Number of days = 28";
            break;

        default:
            cout << "Invalid month!";
    }

    return 0;
}
