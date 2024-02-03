class Solution
{
public:
    bool solve(int term, unordered_map<int, int> &mp)
    {
        for (auto it : mp)
        {
            int var1 = it.second % term;
            int var2 = it.second / term;

            if (var1 < term - 1)
            {
                int req = (term - 1) - var1;
                if (var2 >= req)
                {
                    var1 = term - 1;
                }
            }
            if (var1 > 0 && var1 < term - 1)
            {
                return false;
            }
        }
        return true;
    }
    int minGroupsForValidAssignment(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int var1 = nums.size();
        int term2 = var1;

        for (auto it : nums)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            term2 = min(term2, it.second);
        }

        for (int i = term2 + 1; i > 0; i--)
        {
            if (solve(i, mp))
            {
                int resut = 0;

                for (auto it : mp)
                {
                    int rem = it.second % i;
                    resut += it.second / i;

                    if (rem > 0)
                    {
                        resut += 1;
                    }
                }
                return resut;
            }
        }
        return -1;
    }
};