#include <iostream>
using namespace std;
int main()
{
	double count; double save_x; double fictorial = 1; double fraction = 0; double total = 0;
	double intial_value = 1;
	int x, n; cout << "Enter x=";
	cin >> x; cout << "Enter number of terms=";
	cin >> n;
	for (count = 1; count < n; count++)
	{
		fictorial = fictorial * count;
		save_x = pow(x, count);
		fraction = save_x / fictorial;
		total = total + fraction;
	}
	cout << (intial_value + total);

	return 0;
}


	


	
	


