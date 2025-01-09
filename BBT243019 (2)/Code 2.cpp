#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is Positive." << "\n";
    } 
    else {
        cout << "The number is Negative." << "\n";
    }

    return 0;
}
