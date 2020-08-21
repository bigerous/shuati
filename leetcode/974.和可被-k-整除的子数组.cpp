/*
 * @lc app=leetcode.cn id=974 lang=cpp
 *
 * [974] 和可被 K 整除的子数组
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        vector<int> f(K,0);
        f[0] = 1;
        int sum = 0;

        for (int i =0; i<A.size(); i++){
            sum+=A[i];
            sum %= K;
            sum += K;
            sum %= K;
            f[sum]++;
        }
        int ans = 0;
        for (auto x:f){
            if (x>0)
                ans += x*(x-1)/2;
        }
        return ans;
    }
};
// @lc code=end

