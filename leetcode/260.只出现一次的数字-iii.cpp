/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a = 0;
        for (auto x:nums){
            a ^= x;
        }
        int i ;
        for ( i = 0;i<32;i++){
            if ( (1<<i) & a)
                break;
        }
        int ans1 = 0;
        int ans2 = 0;
        for (auto x:nums){
            if ((1<<i)& x)
                ans1 ^= x;
            else 
                ans2 ^= x;
        }
        return vector<int>{ans1,ans2};
    }
};
// @lc code=end

