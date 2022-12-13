#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    int carry = 0;

    carry = (M < 45) ? -1 : 0;
    M = (60 + M - 45) % 60;
    H = (24 + H + carry) % 24;

    cout << H << ' ' << M;

    return 0;
}
