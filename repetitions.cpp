#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;
    int n = str.size();
    int c = 1;
    int maxx = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            c++;
        }
        else
        {
            maxx = max(maxx, c);
            c = 1;
        }
    }
    maxx = max(maxx, c);

    cout << maxx << endl;

    return 0;
}