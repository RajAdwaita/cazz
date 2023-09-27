#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        tot += i;
    }
    int x = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int temp;
        cin >> temp;
        x += temp;
    }
    // sort(begin(arr), end(arr));
    cout << tot - x << endl;

    return 0;
}