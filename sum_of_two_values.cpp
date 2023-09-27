// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, t;
//     cin >> n >> t;
//     vector<int> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     unordered_map<int, int> mp;

//     // sort(begin(arr), end(arr));
//     // if (arr[0] > t)
//     // {
//     //     cout << "IMPOSSIBLE" << endl;
//     //     return 0;
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         int curr = arr[i];
//         int need = t - curr;
//         if (mp.find(need) != mp.end())
//         {
//             cout << mp[need] << " " << i + 1 << endl;
//             return 0;
//         }
//         // cout << "CURR: " << curr << " NEED: " << need << endl;
//         // else
//         mp[curr] = i + 1;
//     }
//     cout << "IMPOSSIBLE" << '\n';

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<pair<int, int>> values;
    // append the element and its index
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        values.push_back({x, i + 1});
    }

    sort(values.begin(), values.end());
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        // adjust left and right pointers
        if (values[left].first + values[right].first > target)
        {
            right--;
        }
        else if (values[left].first + values[right].first < target)
        {
            left++;
        }
        else if (values[left].first + values[right].first == target)
        {
            cout << values[left].second << " " << values[right].second << endl;
            return 0;
        }
    }

    // print IMPOSSIBLE if we haven't found a pair
    cout << "IMPOSSIBLE" << endl;
}