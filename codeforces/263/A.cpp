#include<bits/stdc++.h>
using namespace std;



int main()
{
	int matrix[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}
	}


	int a = -1, b = -1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (matrix[i][j] == 1)
			{
				a = i;
				b = j;
			}
		}
	}



	a = abs(a - 2);
	b = abs(b - 2);

	cout << a + b;




	return 0;
}
