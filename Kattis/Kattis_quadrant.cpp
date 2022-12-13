#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;                  // input

    if (x > 0 && y > 0)             // quadrant 1
    {
        cout << 1;
    }
    else if (x < 0 && y > 0)        // quadrant 2
    {
        cout << 2;
    }
    else if (x < 0 && y < 0)        // quadrant 3
    {
        cout << 3;
    }
    else                            // quadrant 4
    {
        cout << 4;
    }

    return 0;
}