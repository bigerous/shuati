/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min = INT_MAX;
        int ans = 0;
        sort(nums.begin(), nums.end());

            //cout<<x<<" ";
        //cout<<endl;
        for (int i = 0; i < nums.size(); i++){
            int x = nums[i];
            for (int j = i + 1; j < nums.size() - 1; j++){
                int y = nums[j];
                int z = target - nums[i] - nums[j];
                auto l = lower_bound(nums.begin()+j+1, nums.end(),z);

                //cout<<i<<j<<l-nums.begin()<<endl;
                if (l < nums.end()){
                    if (abs(*l - z) < min){
                        min = abs(*l - z);
                        ans = x+y+*l;
                        //cout <<x <<y<<*l<<endl;
                    }
                }
                auto r = l - 1;
                 //cout<<i<<j<<r-nums.begin()<<endl;
                if (r < nums.end() && r-nums.begin() != j){
                   
                    if (abs(*r - z) < min){
                        min = abs(*r - z);
                        ans = x+y+*r;
                         //cout <<x <<y<<*r<<endl;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

