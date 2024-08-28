#include <bits/stdc++.h>
using namespace std;
const int N = 1100000;
int a[N], n;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        long long sum = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i], sum += a[i];
        if (sum != 0)
        {
            cout << "No" << '\n';
            continue;
        }
        sum = 0;
        int f = 0;
        while (a[n] == 0)
            n--;
        for (int i = n; i >= 2; i--)
        {
            sum += a[i];
            if (sum >= 0)
            {
                f = 1;
            }
        }
        if (!f)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
        
    }
}