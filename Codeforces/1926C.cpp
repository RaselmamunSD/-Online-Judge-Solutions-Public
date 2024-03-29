#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

ll preSum[200001] = {0};

void initFun()
{
    for (int i = 1; i <= 200000; i++)
    {
        ll sum = 0;
        int num = i;

        while (num > 0)
        {
            sum += (num % 10);
            num /= 10;
        }

        preSum[i] = preSum[i - 1] + sum;
    }
}


void solve()
{
    ll n;
    cin >> n;

    cout << preSum[n] << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    initFun();

    while (T--)
    {
        solve();
    }

}
