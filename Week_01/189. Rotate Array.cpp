

//Wenqi Zhao
//五毒神掌第二毒
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		k %= nums.size();  //避免k>n浪费很多空间      三连转转转
		reverse(nums.begin(), nums.end());
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
	}
};


//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int n = nums.size();
//		if (k % n == 0) return;
//		int first = 0, middle = n - k % n, last = n;
//		int next = middle;
//		while (first != next) {
//			swap(nums[first++], nums[next++]);
//			if (next == last) next = middle;
//			else if (first == middle) middle = next;
//		}
//	}
//};