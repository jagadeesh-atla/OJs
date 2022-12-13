// DATE: 11 Dec, 2022 10:31 IST
// Problem: Divisible by A_i
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/DIVISIBLEBY
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int main()
{
    short T;
    cin >> T;
    while (T--)
    {
        int N, ans = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {
            ans = gcd(ans, A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            cout << A[i] / ans << " ";
        }

        cout << '\n';
    }
    return 0;
}
