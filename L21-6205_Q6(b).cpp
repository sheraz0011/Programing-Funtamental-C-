#include <iostream>
using namespace std;
int main() {
    int number; int i; int k; int j; int total;
    cout << "Enter Height =";
    cin >> number;
    total = number;
    for (int i = 1; i <= number; i++) {
    for (int k = number -i; k > 0; k--)
        cout << " ";
    for (int j = 1; j <= ((2 * i) - 1); j++)
        cout << "*";

    cout << endl;
     
    }


    for (int i = total; i > 0; i--) {
        for (int k = number - i; k > 0; k--)
            cout << " ";
        for (int j = 1; j <= ((2 * i) - 1); j++)
            cout << "*";

        cout << endl;
    }
    

    return 0;
}