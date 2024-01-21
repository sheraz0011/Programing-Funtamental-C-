#include<iostream>
using namespace std;
void big01(int a[], int S) {
	cout << "Enter Array's 10 Indexes :";

	for (int count = 0; count < S;) {
		cin >> a[count];
		count=count+1;
	}
}
void big02(int b[], int size) 
{
	int count = 0;

	for (;count < size;)
	{
		if (b[count] != 0) {

			for (; count < size;) {

				cout << b[count];
				count=count+1;
			}

			break;
		}

		else
		{

			count=count+1;

		}

	}
}
void adding(int big1[], int big2[], int big3[], int s) {
	int  a = s - 1;
	int b = s - 2;
	int c = 0;
	int cary = 0;
	int sum;
	int m;
	int answer = 0;
	for (;a > 0;)
	{
		m=big1[b] + big2[b];

		sum =m + cary;
		big3[a] = (sum % 10);
		cary = sum / 10;
		a--;
		b--;
	}
	big3[a] = cary;
	a = s;
	cout << " big1+big2 = ";

}
void subtracting(int a[], int b[], int c[], int s) {
	int index = s - 1;
	int x = 0;
	int k = s;
	for (;index >= 0;)
	{
		if (a[index] < b[index])
		{
			a[index - 1] = a[index - 1] - 1;

			a[index] = a[index] + 10;

		}
		c[index] = a[index] - b[index];
		index=index-1;
	}
}
int main() {
	char b1[10];
	const int s = 10;
	int a[s];

	int b[s];
	int c[s + 1];

	int d[s];
	cout << "Enter ";
	cout << s;
	cout << " digit long numbers"; cout << "\n"; 
	big01(a, s);
	big01(b, s);

	cout << "Big1: ";
	big02(a, s);

	cout << "\n";
	cout << "Big2: ";
	big02(b, s);
	cout << "\n";
	adding(a, b, c, s + 1);

	big02(c, s + 1);
	subtracting(a, b, d, s);
	cout << "\n";
	cout<< "Big1-Big2: ";
	big02(d, s);
}
