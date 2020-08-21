/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] 最大数
 */

// @lc code=start
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
    static bool cmp(const string &a, const string &b){
        return a+b > b+a;

    }
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for (auto x : nums)
            strs.push_back(to_string(x));
        sort(strs.begin(),strs.end(), cmp);
        string ans;
        for (auto s : strs)
            ans += s;
        while (ans[0] == '0' && ans.size()>1)
            ans.erase(0,1);
        return ans;
    }
};
// @lc code=end

