

//Wenqi Zhao
//五毒神掌第一毒、
//我们把只包含质因子 2、3 和 5 的数称作丑数（Ugly Number）。求按从小到大的顺序的第 n 个丑数。



//https://leetcode-cn.com/problems/chou-shu-lcof/
//遍历所有的丑数  O（n）O（n）还是比较好理解的！！！


class Solution {
public:
	int nthUglyNumber(int n) {
		vector<int> dp(n, 0);
		dp[0] = 1;
		int p2 = 0, p3 = 0, p5 = 0;
		for (int i = 1; i < n; i++) {
			dp[i] = min(min(dp[p2] * 2, dp[p3] * 3), dp[p5] * 5);
			if (dp[i] == dp[p2] * 2)
				p2++;
			if (dp[i] == dp[p3] * 3)
				p3++;
			if (dp[i] == dp[p5] * 5)
				p5++;
		}
		return dp[n - 1];
	}
};






