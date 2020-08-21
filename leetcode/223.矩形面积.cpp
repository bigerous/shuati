/*
 * @lc app=leetcode.cn id=223 lang=cpp
 *
 * [223] 矩形面积
 */

// @lc code=start
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long x1 = max(A,E);
        long y1 = max(B,F);
        long x2 = min(C,G);
        long y2 = min(D,H);
        long x = x2 - x1;
        long y = y2 - y1;
        long minus = 0;
        if (x <0 || y <0)
            minus =  0;
        else 
            minus = x*y;
        long ans = (long)(C-A)*(D-B) + (long)(G-E)*(H-F) - minus;
        return ans;
    }
};
// @lc code=end

