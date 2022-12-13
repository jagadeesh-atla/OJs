// DATE: 11 Dec, 2022 00:51 IST
// Problem: Maximise XOR
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/XORMAX
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>

using namespace std;

int noOfOnes(string A, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == '1')
		{
			count++;
		}
	}
	return count;
}

string maxXOR(string A, string B, int onesA, int onesB, int zeroesA, int zeroesB, int n)
{
	char ans[n];
	for (int i = 0; i < n; i++)
	{
		if (onesA > 0 && zeroesB > 0)
		{
			ans[i] = (1 ^ 0) + '0';
			onesA--;
			zeroesB--;
		}
		else if (onesB > 0 && zeroesA > 0)
		{
			ans[i] = (0 ^ 1) + '0';
			onesB--;
			zeroesA--;
		}
		else if (onesA > 0 && onesB > 0)
		{
			ans[i] = (1 ^ 1) + '0';
			onesA--;
			onesB--;
		}
		else
		{
			ans[i] = (0 ^ 0) + '0';
			zeroesA--;
			zeroesB--;
		}
	}

	ans[n] = '\0';

	return ans;
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		string A, B;
		cin >> A >> B;
		int n = A.length();

		int onesA = noOfOnes(A, n);
		int onesB = noOfOnes(B, n);

		int zeroesA = n - onesA;
		int zeroesB = n - onesB;

		string ans = (onesA >= onesB) ? maxXOR(A, B, onesA, onesB, zeroesA, zeroesB, n) : maxXOR(B, A, onesB, onesA, zeroesB, zeroesA, n);

		cout << ans<<endl;
	}
	return 0;
}