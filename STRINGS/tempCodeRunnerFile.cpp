int solve(int ind, int ans, string str, vector<string> &arr)
// {
//     if (ans == str)
//     {
//         return 1;
//     }
//     int notTake = solve(ind + 1, ans, str, arr);
//     int take = 1 + solve(ind + 1, ans + arr[ind], str, arr);
//     return take + notTake;
// }