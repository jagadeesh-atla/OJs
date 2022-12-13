// DATE: 11 Dec, 2022 00:01 IST
// Problem: Reach fast
// Contest: CodeChef - DEC221D
// URL: https://www.codechef.com/DEC221D/problems/REACHFAST
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
        int X, Y, K;
        cin >> X >> Y >> K;
        int diff = Y - X, ans;
        if (diff >= 0)
        {
            ans = diff / K + ((diff % K) != 0);
        }
        else
        {
            ans = -diff / K + (((-diff) % K) != 0);
        }
        cout << ans << '\n';
    }

    return 0;
}
