#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long currSum = 0;
    long long ans = INT_MIN;
    for (long long i = 0; i < n; i++)
    {
        currSum += arr[i];
        ans = max(ans, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << ans << '\n';

    return 0;
}