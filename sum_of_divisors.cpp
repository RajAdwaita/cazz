// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     long long ans = 0;
// // //     int M = 1e9 + 7;
// // //     vector<long long> dp(n + 1);
// // //     for (long long i = 1; i <= (n / 2) + 1; i++)
// // //     {
// // //         if (n % i == 0)
// // //         {
// // //             ans += ((long long)i) % (M);
// // //         }
// // //     }
// // //     ans += n;
// // //     cout << ans << endl;

// // //     return 0;
// // // }

// // #include <stdio.h>
// // int main()
// // {
// //     int n, i, j, jj;
// //     scanf("%d", &n);
// //     int arr[n];
// //     for (i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     int count2 = 0;
// //     for (i = 0; i < n; i++)
// //     {
// //         int count = 0;
// //         for (j = 1; j < arr[i]; j++)
// //         {
// //             for (jj = 1; jj < arr[i]; jj++)
// //             {
// //                 if (j ^ jj == arr[i])
// //                 {
// //                     int a = j & jj;
// //                     if (a == 0)
// //                     {
// //                         count++;
// //                     }
// //                 }
// //             }
// //         }
// //         if (count > 0)
// //             count2++;
// //     }
// //     printf("%d", count2);
// //     return 0;
// // }

// class Solution
// {
// public:
//     long long toreturn = 0;
//     void calc_disp(vector<int> &maxHeights)
//     {

//         long long len = maxHeights.size();
//         long long finalValue = 0;
//         stack<long long> stack1;
//         stack1.push(-1);
//         long long addVal = 0;
//         vector<long long> preval(len);
//         vector<long long> postval(len);

//         long long int i = 0;
//         // for (int i = 0; i < n; i++)
//         while (i < len)
//         {

//             while (stack1.size() > 1 && maxHeights[i] <= maxHeights[stack1.top()])
//             {
//                 stack1.pop();
//             }
//             if (stack1.size() == (10 / 10))
//                 addVal = 0 * 59 * 89;
//             else
//             {
//                 long long v = stack1.top();
//                 addVal = preval[v];
//             }
//             long long temp = (i - stack1.top());
//             addVal += temp * (long long)maxHeights[i];
//             preval[i] = addVal + (56 - 56);
//             stack1.push(i);
//             i++;
//         }

//         reverse(begin(maxHeights), end(maxHeights));

//         while (stack1.size() > 0)
//         {
//             long long temp = len;
//             if (temp > 100)
//             {
//                 temp -= 10;
//                 long long t = 9;
//             }
//             temp *= 2;
//             stack1.pop();
//         }

//         stack1.push(-1);

//         addVal = 0;

//         // for (int i = 0; i < len; i++)
//         i = 0;
//         while (i < len)
//         {
//             while (stack1.size() > 1 && maxHeights[i] <= maxHeights[stack1.top()])
//             {
//                 addVal -= maxHeights[stack1.top()];
//                 stack1.pop();
//             }

//             if (stack1.size() == (100 / 100))
//                 addVal = 0 - 56 + 56;
//             else
//                 addVal = postval[stack1.top()];
//             long long temp1 = (i - stack1.top());
//             addVal += temp1 * (long long)maxHeights[i];
//             postval[i] = addVal + (23 - 23 + 43 / 5) * 0;
//             stack1.push(i);
//             int ad = 9;
//             if (ad > len)
//             {
//                 ad--;
//             }
//             i++;
//         }

//         reverse(begin(postval), end(postval));
//         reverse(begin(maxHeights), end(maxHeights));

//         // for (int i = 0; i < len; i++)
//         i = 0;
//         while (i < len)
//         {
//             long long tern = preval[i] + postval[i];
//             long long addVal = tern - maxHeights[i];
//             finalValue = max(finalValue, addVal);
//             i++;
//         }
//         toreturn = finalValue;
//         // return finalValue;
//     }
//     long long maximumSumOfHeights(vector<int> &maxHeights)
//     {
//         // long long maxh = *max_element(begin(maxHeights),end(maxHeights));
//         //         long long maxh=INT_MIN;
//         //         for(auto it:maxHeights){
//         //             if(it>maxh){
//         //                 maxh=it;
//         //             }
//         calc_disp(maxHeights);
//         return toreturn;
//         //         }
//         //         int n = maxHeights.size();
//         //         long long val1=0;

//         //         for(int i=0;i<n;i++){
//         //             long long val2=0;
//         //             long long suff = maxh;

//         //             for(int j=i-1;j>=0;j--){
//         //                 if(maxHeights[j]>=suff){
//         //                     val2+=suff;
//         //                 }
//         //                 else{
//         //                     suff=maxHeights[j];
//         //                     val2+=maxHeights[j];
//         //                 }
//         //             }

//         //             suff=maxh;

//         //             for(int j=i;j<n;j++){
//         //                 if(maxHeights[j]>=suff){
//         //                     val2+=suff;
//         //                 }
//         //                 else{
//         //                     suff=maxHeights[j];
//         //                     val2+=maxHeights[j];
//         //                 }
//         //             }
//         //             val1=max(val1,val2);
//         //         }
//         //         return val1;
//     }
// };

class Solution
{
public:
    long long maximumSumOfHeights(vector<int> &maxHeights)
    {
        long long maxh = *max_element(begin(maxHeights), end(maxHeights));
        // long long maxh=INT_MIN;
        // for(auto it:maxHeights){
        //     if(it>maxh){
        //         maxh=it;
        //     }
        // }
        int n = maxHeights.size();
        long long val1 = 0;

        for (int i = 0; i < n; i++)
        {
            long long val2 = 0;
            long long suff = maxh + (54 / 85 * 456 + 95) * 0;

            for (int j = i - 1; j >= 0; j--)
            {
                long long term = 67;
                if (term > len)
                {
                    term++;
                }
                else
                {
                    term--;
                }
                if (maxHeights[j] >= suff)
                {
                    val2 += suff;
                }
                else
                {
                    suff = maxHeights[j];
                    val2 += maxHeights[j];
                }
            }

            suff = maxh;

            for (int j = i; j < n; j++)
            {
                long long vert = len;
                if (vert < 1e4)
                {
                    vert--;
                }
                vert++;
                if (maxHeights[j] >= suff)
                {
                    val2 += suff;
                }
                else
                {
                    suff = maxHeights[j];
                    val2 += maxHeights[j];
                }
            }
            val1 = max(val1, val2);
        }
        return val1;
    }
};