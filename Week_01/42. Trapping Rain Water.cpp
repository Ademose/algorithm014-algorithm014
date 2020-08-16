

//Wenqi Zhao
//五毒神掌第一毒、
//给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。


//除了暴力之外思考到了 压栈 有一个max值来衡量可能可以接水的地方。小的压进去直到大的值出现 O(n)O(n)
//也思考到了可能可以使用双指针，但是没有考虑到相对最大值来做  O(n)O(1)

//这个题真是设计的最精妙的一道题了，太喜欢了也

class Solution {
public:
	int trap(vector<int>& height) {
		int left = 0; int right = height.size() - 1;
		int res = 0;
		int maxleft = 0, maxright = 0;
		while (left <= right) {
			if (height[left] <= height[right]) {
				if (height[left] >= maxleft) maxleft = height[left];
				else res += maxleft - height[left];
				left++;
			}
			else {
				if (height[right] >= maxright) maxright = height[right];
				else res += maxright - height[right];
				right--;
			}
		}
		return res;
	}
};




//int trap(vector<int>& height)
//{
//	int ans = 0;
//	stack<int> st;
//	for (int i = 0; i < height.size(); i++)
//	{
//		while (!st.empty() && height[st.top()] < height[i])
//		{
//			int cur = st.top();
//			st.pop();
//			if (st.empty()) break;
//			int l = st.top();
//			int r = i;
//			int h = min(height[r], height[l]) - height[cur];
//			ans += (r - l - 1) * h;
//		}
//		st.push(i);
//	}
//	return ans;
//}

