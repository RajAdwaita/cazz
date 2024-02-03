#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;
int M = 1e9;
int nums;
// string ss, tt;
vector<int> vect;
int dynamicc[20000][20000];
int solve(int i, int cnt, int key)
{
    if (i == vect.size())
    {
        if (cnt == 0)
            return 0;
        return M;
    }
    if (dynamicc[i][cnt] != -1)
        return dynamicc[i][cnt];
    int ans = M;
    int tp = i + 1;
    if (tp < vect.size())
    {
        int temp = min(key, vect[i + 1] - vect[i]);
        ans = min(ans, solve(i + 2, cnt, key) + temp);
    }
    if (cnt > 0)
    {
        ans = min(ans, solve(i + 1, cnt - 1, key));
    }
    ans = min(ans, solve(i + 1, cnt + 1, key) + key);
    return dynamicc[i][cnt] = ans;
}
int minOperations(string aa, string bb, int pp)
{
    nums = aa.size();
    // key = z;
    vect.clear();
    int i = 0;
    while (i < nums)
    // for (int i = 0; i < nums; i++)
    {
        if (aa[i] == bb[i])
        {
            continue;
        }
        else
        {

            vect.push_back(i);
        }
        i++;
    }
    int llx = vect.size() % 2;
    if (llx)
    {
        return -1;
    }
    else
    {
        i = 0;
        while (i < nums)
        // for (int i = 0; i < nums; i++)
        {
            for (int j = 0; j < nums; j++)
            {
                dynamicc[i][j] = -1;
            }
            i++;
        }
        return solve(0, 0, pp);
    }
    return -1;
}