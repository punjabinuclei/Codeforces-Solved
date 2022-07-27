#include<bits/stdc++.h>
using namespace std;



int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);

// #endif


	int n, t;

	cin >> n >> t;

	string s;
	cin >> s;

	while (t--)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << s[i];
	}

	return 0;
}
