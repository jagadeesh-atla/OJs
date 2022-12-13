// DATE: 10 Dec, 2022 23:54 IST
// Problem: Good Investment or Not
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/INVESTMENT
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
        int X, Y;
        cin >> X >> Y;
        string ans = (X >= 2 * Y) ? "YES\n" : "NO\n";
        cout << ans;
    }

    return 0;
}