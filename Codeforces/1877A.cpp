#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ll temp;
        cin >> temp;

        sum += temp;
    }

    cout << -(sum) << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
