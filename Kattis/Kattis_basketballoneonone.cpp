#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Taking input as string
    string input_str;
    cin >> input_str;

    // initialising variables
    int n = input_str.length();
    int i = 0;
    int score_A = 0;
    int score_B = 0;
    int score_diff = score_B - score_A;

    // writting loop
    while (i < n)
    {
        score_diff = score_B - score_A;

        if (input_str[i] == 'A')
        {
            score_A += int(input_str[i + 1]);
        }
        else if (input_str[i] == 'B')
        {
            score_B += int(input_str[i + 1]);
        }

        i += 2;
    }

    // checking for output
    if (score_A == 10 && score_B == 10)
    {
        if (score_diff == -2)
        {
            cout << 'A';
            exit;
        }
        else
        {
            cout << 'B';
            exit;
        }
    }
    if (score_A > score_B)
    {
        cout << 'A';
    }
    else
    {
        cout << 'B';
    }

    return 0;
}