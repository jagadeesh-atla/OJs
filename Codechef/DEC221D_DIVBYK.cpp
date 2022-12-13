#include <bits/stdc++.h>

using namespace std;

multiset<int> Af;
vector<int> Kf;

// void printvec(vector<int> const &a)
// {
    // for (int i = 0; i < (int)a.size(); i++)
        // cout << a.at(i) << ' ';
    // cout << endl;
// }
// 
// void printset(multiset<int> const &mlt)
// {
    // for (multiset<int>::const_iterator i(mlt.begin()), end(mlt.end());
         // i != end;
         // ++i)
        // cout << *i << " ";
    // cout << endl;
// }

void primeFactorsOfA(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (A[i] % 2 == 0)
        {
            Af.insert(2);
            A[i] /= 2;
        }
        for (int j = 3; j * j <= A[i]; j++)
        {
            while (A[i] % j == 0)
            {
                Af.insert(j);
                A[i] /= j;
            }
        }
        if (A[i] > 2)
            Af.insert(A[i]);
    }
}

void primeFactorsOfK(int n)
{
    while (n % 2 == 0)
    {
        Kf.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            Kf.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        Kf.push_back(n);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, i = 0;
        cin >> N >> K;
        int A[N];
        while (N--)
        {
            cin >> A[i++];
        }
        primeFactorsOfA(A, i);
        primeFactorsOfK(K);

        vector<int> AandK(Af.size());

        set_intersection(Af.begin(), Af.end(), Kf.begin(), Kf.end(), AandK.begin());

        while (!AandK.empty() && AandK.back() == 0)
        {
            AandK.pop_back();
        }

        // printset(Af);
        // printvec(Kf);
        // printvec(AandK);

        if (AandK == Kf)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        Af.clear();
        Kf.clear();
        AandK.clear();
    }

    return 0;
}
