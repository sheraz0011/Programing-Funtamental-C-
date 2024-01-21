#include <iostream>
using namespace std;
int main() {
	int total = 0;  	int total1 = 0;

	int number;
	  
	int aarr[10];

	int arr[10] = { 3,4,5,3,6,3,2,9,1,2 };

	cout << "enter N :";

	cin >> number;

	for (int i = 1; i <= 10; i=i+1) {

		if (i != 10 - number) {
			for (int k = i; k < i + number; k=k+1) {

				total = total + arr[k];

			}
			if (total > total1) 
			{
				total1 = total;

				for (int j = i, p = 0; j < i + number; j++, p++) {
					aarr[p] = arr[j];
				}
			}
			total = 0;

		}
		else
			break;
	}
	cout << "maximum ";
	cout << number;

	cout << " tuplet is";  cout<<" = ";
	cout<< total1 << "\n" << "VALUES  Are = ";

	for (int a = 0; a < number; a=a+1) {

		cout << aarr[a];
		cout<< " ";
	}
}