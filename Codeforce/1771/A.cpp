// DATE: 11 Dec, 2022 21:06 IST
// Problem: A. Hossam and Combinatorics
// Contest: Codeforces - Codeforces Round #837 (Div. 2)
// URL: https://codeforces.com/contest/1771/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int minA = INT_MAX, maxA = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			// if (a[i] < minA)
			// {
				// minA = a[i]; 
			// }
			// if (a[i] > maxA)
			// {
				// maxA = a[i];
			// }
		}
		
		maxA = *max_element(a, a+n);
		minA = *min_element(a, a+n);
		
		int maxDiff = abs(maxA - minA), x = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n && i != j; j++)
			{
				int diff = abs(a[i] - a[j]);
				if (diff == maxDiff)
				{
					x++;
				}
			}
		}	
		
		cout << 2*x <<"\n";		
	}
	
	return 0;
}
