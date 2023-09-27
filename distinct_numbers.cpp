#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    ll ans = 0;
    cin >> n;
    vector<ll> arr(n);
    // unordered_map<ll, ll> mp;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        st.insert(arr[i]);
    }
    cout << st.size() << endl;

    return 0;
}