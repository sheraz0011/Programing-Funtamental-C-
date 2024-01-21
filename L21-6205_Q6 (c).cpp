#include <iostream>
using namespace std;
int main() {
    int number; int i; int j; int total;
    cout << "Enter Height =";
    cin >> number;
    for (i = 1; i <= number; i++) {
        for (j = i; j < number; j++)
            cout << " ";
        for (j = 1; j <= ((2 * i )- 1); j++)
        
            if (i == number || j == 1 || j == ((2 * i )- 1))
                cout << "*";
            else
                cout << " ";
              cout << endl;     
    }    return 0;
}