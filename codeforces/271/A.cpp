#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int year;
	cin >> year;

	while (1)
	{
		year++;

		int a = year % 10;
		int b = (year / 10) % 10;
		int c = (year / 100) % 10;
		int d = (year / 1000) % 10;

		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{

			break;
		}
	}
	cout << year;

	return 0;
}
