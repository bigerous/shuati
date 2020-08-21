/*
 * @lc app=leetcode.cn id=313 lang=cpp
 *
 * [313] 超级丑数
 */

// @lc code=start
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> nums(1,1);
        int k = primes.size();
        vector<int> f(k,0);
        
        for (int i = 1; i <n; i++){
            int m = INT_MAX;
            int x = -1;
            for (int j = 0; j < k; j++){
                if (nums[f[j]] * primes[j] < m){
                    m = nums[f[j]] * primes[j];
                    x = j;
                }
            }
            f[x] ++ ;
            nums.push_back(m);
            for (int j=0; j<k; j++){
                while (nums[f[j]] * primes[j] <= m)
                    f[j]++;
            }
        }
        // for (auto x: nums)
        //     cout<<x<<" ";
        return nums[n-1];
    }
};
// @lc code=end

