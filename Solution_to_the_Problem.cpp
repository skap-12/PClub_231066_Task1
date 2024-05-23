#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

int maxbit = 39, flag = 1;

long long binpower(long long a, int n)
{
    long long res = 1;
    while (n > 0)
    {
        if (n % 2)
        {
            res *= a;
        }
        a *= a;
        n >>= 1;
    }
    return res;
}

vector<int> chk(40, 0);

long long solve(long long n)
{
    if (n == 0 || chk[0])
    {
        flag = 1;
        return n;
    }
    long long temp = n;
    int ctr = 0;
    while (temp)
    {
        temp /= 3;
        ctr++;
    }
    ctr--;
    if (flag)
    {
        flag = 0;
        maxbit = ctr;
    }
    if (chk[ctr] == 0)
    {
        chk[ctr] = 1;
        temp = n;
        temp -= binpower(3, ctr);
    }
    else
    {
        while (chk[ctr])
        {
            ctr--;
        }
        chk[ctr] = 1;
        temp = n;
        temp -= binpower(3, ctr);
    }
    return solve(temp);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long temp = n;
        long long ans = 0;
        long long r = solve(temp);
        if (r == 0)
        {
            cout << "YES ";
            for (int i = maxbit - 1; i >= 0; i--)
            {
                if (chk[i])
                {
                    ans += binpower(2, i);
                }
            }
            cout << ans;
        }
        else
        {
            cout << "NO ";
            cout << n - r;
        }

        for (int i = 0; i < 40; i++)
        {
            chk[i] = 0;
        }
        cout << endl;
    }
    return 0;
}