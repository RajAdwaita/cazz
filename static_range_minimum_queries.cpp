#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll a, b;
    ll summ = 0;
    vector<ll> presum(n + 1);

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
    }

    return 0;
}