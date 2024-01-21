#include <iostream>
using namespace std;
void D0(char a[][10], char b[]) {
	int x = 0;
	int found = 0;
	int j;
	int i;
	int k;
	for (j = 1; j <= 10; ) {
		for ( i = 1; i <= 10; ) {
			if (a[i][j] == b[0]) {
				if (i - (strlen(b) - 1) >= 0) {
					x = i;
					found = 0;
					for (k = 0; k < strlen(b); ) {

						if (a[x][j] == b[k]) {
							x = x - 1;;
							found=found+1;
						}
						if (found == strlen(b)) {
							cout << b;
							 cout << " Found at";
							cout << "(  ";
							  cout << i;
							cout << ", ";
							cout << j; cout << "  )"; cout << " Direction 0";
							cout<< "\n";
						}
						k = k + 1;
					}
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D1(char a[][10], char b[]) {
	int x = 0;
	int y = 0;
	int found = 0;
	int j;
	int i;  int k;
	for (int j = 1; j <= 10;) {
		for (int i = 1; i <= 10; ) {
			if (a[i][j] == b[0]) {
				if (j - (strlen(b) - 1) >= 0) {
					x = i;
					y = j;
					found = 0;
					for (int k = 0; k < strlen(b);) {

						if (a[x][y] == b[k]) {
							x = x - 1;;
							y=y+1;
							found=found+1;
						}
						if (found == strlen(b)) {
							cout << b;
							cout << " Found at "; cout << "( ";
							  cout << i << " , ";
							  cout << j;
							  cout << "  )";
							  cout << " Direction 1";
							  cout<< "\n";
						}k = k + 1;
					}
					
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D2(char a[][10], char b[]) {
	int x = 0;
	int found = 0;
	int j;
	int k;
	for (int j = 1; j <= 10;) {
		for (int i = 1; i <= 10; ) {
			if (a[i][j] == b[0]) {
				x = j;
				found = 0;
				for (int k = 0; k < strlen(b);) {
					if (a[i][x] == b[k]) {
						x = x + 1;
						found = found + 1;
					}
					if (found == strlen(b)) {
						cout << b << " Found at";
						cout <<"( "; cout << i;
						cout << ", " << j;
						cout << " )";
						cout << " Direction 2" << "\n";
					}
					k = k + 1;
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D3(char a[][10], char b[]) {
	int x = 0;
	int y = 0;
	int found = 0;
	int i;
	int j;
	int k;
	for (int j = 1; j <= 10; ) {
		for (int i = 1; i <= 10; ) {
			if (a[i][j] == b[0]) {
				if (j - (strlen(b) - 1) >= 0) {
					x = i;
					y = j;
					found = 0;
					for (int k =0 ; k < strlen(b); ) {

						if (a[x][y] == b[k]) {
							x=x+1;
							y=y+1;
							found=found+1;
						}
						if (found == strlen(b)) {
							cout << b;  
							 cout << " Found at ( ";
							 cout << i << " ,";
							 cout << j;
							 cout << " )";  cout << " Direction 3";
							   cout<< "\n";
						}
						k = k + 1;
					}
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D4(char a[][10], char b[]) {
	int x = 0;
	int found = 0;
	int i; int j;
	int k;
	for (int j = 1; j <= 10;) {
		for (int i = 1; i <= 10;) {
			if (a[i][j] == b[0]) {
				x = i;
				found = 0;
				for (int k = 0; k < strlen(b); ) {

					if (a[x][j] == b[k]) {
						x=x+1;
						found=found+1;
					}
					if (found == strlen(b)) {
						cout << b; 
						  cout << " Found at";
						  cout<<" ( "; cout << i;
						  cout << " , ";
						    cout << j;
							cout << " )";  cout << " Direction 4";
								  cout<< "\n";
					}
					k = k + 1;
				}

			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D5(char a[][10], char b[]) {
	int x = 0;
	int y = 0;
	int found = 0;
	for (int j = 1; j <= 10; ) {
		for (int i = 0; i < 10; ) {
			if (a[i][j] == b[0]) {
				if (j - (strlen(b) - 1) >= 0) {
					x = i;
					y = j;
					found = 0;
					for (int k = 0; k < strlen(b); ) {

						if (a[x][y] == b[k]) {
							x = x + 1;
							y = y - 1;
							found=found+1;
						}
						if (found == strlen(b)) {
							cout << b;  cout << " Found at ";
							cout << " ( ";
							   cout << i << ", ";
							cout << j;
							cout << "  )";   cout << " Direction 5";
							  cout<< "\n";
						}
						k = k + 1;
					}
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void D6(char a[][10], char b[]) {
	int x = 0;
	int found = 0;
	int i;
	int j;
	for (int  j = 0; j < 10; ) {
		for (int  i = 0; i < 10; i++) {
			if (a[i][j] == b[0]) {
				x = j;
				found = 0;
				for ( int  k = 0; k < strlen(b); ) {
					if (a[i][x] == b[k]) {
						x=x+1;
						found=found+1;
					}
					if (found == strlen(b)) {
						cout << b;   cout << " Found at ( ";
						cout << i;
						cout << ",";
						cout << j;
						cout << "  )"; 
						cout << " Direction 6";
							  cout << "\n";
					}
					k = k + 1;
				}

			}
			i =i + 1;
		}
		j = j + 1;
	}
}
void D7(char a[][10], char b[]) {
	int x = 0;
	int y = 0;
	int found = 0;
	int i;
	int j;
	for (int  j = 0; j < 10; ) {
		for (int  i = 0; i < 10; ) {
			if (a[i][j] == b[0]) {
				if (j - (strlen(b) - 1) >= 0) {
					x = i;
					y = j;
					found = 0;
					for (int k = 0; k < strlen(b);) {

						if (a[x][y] == b[k]) {
							x=x-1;
							y=y-1;
							found=found+1;
						}
						if (found == strlen(b)) {
							cout << b;  cout << " Found at ( ";
							cout << i;
							cout << ",";
							cout << j;
							cout << " )";
							cout << " Direction 7";
							         cout << "\n";
						}
						k = k + 1;
					}
				}
			}
			i = i + 1;
		}
		j = j + 1;
	}
}
void Search(char a[][10], char b[]) {
	D0(a, b);
	D1(a, b);
	D2(a, b);
	D3(a, b);
	D4(a, b);
	D5(a, b);
	D6(a, b);
	D7(a, b);


}
int main() {
	int x = 0;
	int y = 5;
	char a[10][10] = {
						{ 'T', 'N', 'E', 'M', 'N', 'G', 'I', 'S', 'S', 'A'},
						{ 'B', 'N', 'C', 'A', 'O', 'M', 'P', 'J', 'W', 'R'},
						{ 'C', 'L', 'A', 'R', 'I', 'F', 'Y', 'H', 'X', 'R'},
						{ 'L', 'O', 'S', 'C', 'T', 'G', 'H', 'C', 'E', 'V'},
						{ 'A', 'N', 'M', 'H', 'S', 'Y', 'S', 'T', 'E', 'M'},
						{ 'S', 'T', 'I', 'P', 'E', 'Q', 'N', 'A', 'F', 'E'},
						{ 'S', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 'M'},
						{ 'U', 'E', 'F', 'N', 'Q', 'T', 'G', 'Q', 'W', 'O'},
						{ 'D', 'K', 'R', 'O', 'W', 'T', 'E', 'N', 'K', 'R'},
						{ 'A', 'O', 'M', 'O', 'D', 'N', 'A', 'R', 'T', 'Y'},
	};
	char b[15][11] = {
							"COMPUTER",
							"QUESTION",
							"CLARIFY",
							"NETWORK",
							"SYSTEM",
							"CLASS",
							"SEQUENCE",
							"CATCH",
							"MEMORY",
							"RANDOM",
						  "ASSIGNMENT",
							"MARCH",
							"SCANT",
							"SPEED",
							"ENTER"
	};
	cout << "      ";
	for (int i = 1; i <= 10; i=i+1) {
		cout << i << "   ";
	}
	cout << "\n";
	cout << "  ";
	for (int i = 1; i <= 41; i=i+1) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 1; i <= 10; i=i+1) {
		cout << i << " | " << "  ";
		for (int j = 1; j <= 10; j=j+1) {
			cout << a[i][j] << "   ";
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 1; i <= 15; i=i+1) {
		for (int j = 0; j < 11; j=j+1) {
			cout << b[i][j];
		}
		cout << "      ";
		if (i == 4 || i == 9) {
			cout << "\n";
		}
	}
	cout << "\n";
	cout << "\n";
	cout<< "\n";
	int i=1;
	while( i <= 15) {
		Search(a, b[i]);
		i = i + 1;
	}
}