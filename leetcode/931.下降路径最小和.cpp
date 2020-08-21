/*
 * @lc app=leetcode.cn id=931 lang=cpp
 *
 * [931] 下降路径最小和
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        auto f = A;
        for (int i = 1; i < A.size(); i++){
            for (int j = 0; j <A[0].size(); j++ ){
                f[i][j] = f[i-1][j];
                if (j<A[0].size()-1)
                    f[i][j] = min(f[i][j],f[i-1][j+1]);
                if (j>0)
                    f[i][j] = min(f[i][j],f[i-1][j-1]);
                f[i][j] += A[i][j];
            }
        }
        int ans = INT_MAX;
        for (auto x:f[f.size()-1])
            ans = min(ans,x);
        return ans;
    }
};
// @lc code=end

