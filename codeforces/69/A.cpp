#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;

	cin >> n;

	int x_value = 0, y_value = 0, z_value = 0;

	while (n--)

	{
		int x, y, z;

		cin >> x >> y >> z;

		x_value += x;
		y_value += y;
		z_value += z;
	}


	if (x_value == 0 && z_value == 0 && y_value == 0)
		cout << "YES\n";
	else
		cout << "NO\n";



	return 0;
}
