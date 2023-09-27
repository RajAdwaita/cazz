#include <bits/stdc++.h>
using namespace std;
// int solve(int &a, int &b){
//     if(a==0 || b==0){
//         return
//     }
// }
int UnEqual(int N)
{
    if (N < 4)
    {
        // If N is less than 4, it's not possible to divide into 4 unequal segments
        return 0;
    }

    // Initialize a count variable
    int count = 0;

    // Iterate through possible values of the first two segments
    for (int seg1 = 1; seg1 <= N - 3; ++seg1)
    {
        for (int seg2 = seg1; seg2 <= N - 3; ++seg2)
        {
            // Calculate the remaining length
            int remaining = N - seg1 - seg2;

            // Check if remaining can be divided into two equal segments
            if (remaining % 2 == 0)
            {
                int seg3 = remaining / 2;
                int seg4 = seg3;

                // Check that all four segments are not of the same size
                if (seg1 != seg2 && seg1 != seg3 && seg1 != seg4 && seg2 != seg3 && seg2 != seg4 && seg3 != seg4)
                {
                    count++;
                }
            }
        }
    }

    return count;
}
int main()
{
    /* code */

    // int a = 4;
    // int b = 4;
    int n = 6;
    // int c = 0;
    // for (int a = 1; a < n; a++)
    // {
    //     int b = n - a;

    //     if (b != a)
    //     {
    //         c++;
    //     }
    // }

    // cout << solve(a, b) << endl;
    cout << UnEqual(n) << endl;
    return 0;
}
