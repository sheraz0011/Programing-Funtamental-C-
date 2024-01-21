#include<iostream>
using namespace std;
int main()
{
	int x_1; int y_1; int slope; int x_2; int y_2; int constant; int count;
	int newnum; int a; int b; int p; int var; int i = 9; int n = 10; int n2 = 9; int t;
	cout << "Enter Co-ordinate =  ";
	cin >> x_1;
	cin >> y_1;
	cout << "Enter Co-ordinate =  ";
	cin >> x_2;
	cin >> y_2;
	a = y_2 - y_1;
	b = x_2 - x_1;
	slope = a / b;
	p = slope * x_1;
	constant = y_1 - p;
	cout << "Linear Equation  ";
	cout << "Y  =  ";
	cout << slope;
	cout << "X  +  ";
	cout << constant;
	newnum = i;
	var = slope * newnum + constant;
	for (int i = n; i >= -n; i--) {
		newnum = i;
		count = var;
		for (int k = n2; k >= -n2; k--) {
			if (k == -((slope * i) + constant))
				cout << "x";
			else if (i == 0 && k == 0)
				cout << "+";
			else if (i == 0)
				cout << "-";
			else if (k == 0)
				cout << "|";
			else
				cout << " ";
		}

		cout << endl;
	}
	return 0;
}


