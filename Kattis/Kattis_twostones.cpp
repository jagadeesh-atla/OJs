#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    // odd is Alice...
    string win = (N % 2 == 0) ? "Bob" : "Alice";

    cout << win;

    return 0;
}