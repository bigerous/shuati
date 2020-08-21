/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
        vector<long> f(n+1,1);
        switch (n)
        {
        case 1:
        case 2:
            return 1;
        case 3:
            return 2;
        }
        for (int i =1; i<=n; i++){
            f[i] = i;
            for (int j = 0; j <i; j++){
                f[i] = max(f[i], f[j] * f[i-j]);
            }
        }
        return f[n];
    }
};
// @lc code=end

