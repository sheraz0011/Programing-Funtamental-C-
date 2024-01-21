#include <iostream>
using namespace std;
int main()
{
	float number; float pi = 0; float sign = 1; int number2;
	cout << "Enter number of terms to calculate =";
	cin >> number;
	number2 = 2*number;
	for (float j = 1; j <= number2; j = j + 2)
	{
		pi = pi + sign * (4 / j);
		sign = -sign;


	}
	cout << pi;

	return 0;
}

