#include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;
main()
{
    int i, j;
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (i = 0; i < 3; i++)
    {
        // printf("%d\n", i);
        a[i] = a[i] + 1;
        i++;
    }
    i--;
    // printf("%d", i);
    for (j = 7; j > 4; j--)
    {
        int i = j / 2;
        a[i] = a[i] - 1;
    }
    // cout << i << " " << a[i] << endl;
    printf("%d,%d\n", i, a[i]);
    // return 0;
}