// DATE: 11 Dec, 2022 08:18 IST
// Problem: Gcd of Subarrays
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/GCDSUBARRAYS
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		long long N, K;
		cin >> N >> K;
		long long minSum = N * (N + 1);
		minSum = minSum/2;
		minSum = minSum - 1;
		if (K < minSum)
		{
			cout << "-1" << '\n';
			continue;
		}
		for (int i = 1; i < N; i++)
			cout << "1" << " ";
		cout << K - minSum << '\n';
	}
	return 0;
}
