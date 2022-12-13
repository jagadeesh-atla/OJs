// DATE: 11 Dec, 2022 11:22 IST
// Problem: Sum of Cube
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/SUMOFCUBE
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int k = 0;
void sumOf(int A[],unsigned int F[])
{
	unsigned int sum = 0;
	static int i = 0;
	int j = 0;
	while (j <= i)
	{
		sum += A[j];
	}
	i++;
	F[k++] = sum;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
		
		unsigned int F[N * N];
        unsigned int ans = 0;
                
        for (int l = 0; l < N; l++)
        {
        	unsigned int sum = 0;
	        static int i = 0;
	        int j = 0;
	        while (j <= i)
	        {
	        	sum += A[j];
        	}
        	i++;
        	F[k++] = sum;
        }
        
        for (int m = 0; m < k; m++)
        {
        	ans += (F[m] * F[m] * F[m]) % (998244353);
        }
        k = 0;
        cout << ans << '\n';
    }

    return 0;
}
