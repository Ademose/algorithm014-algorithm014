

//Wenqi Zhao
//五毒神掌第一毒、
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//典型双指针。思路及其明确！
//考虑到了 j从1开始 但是发现要处理特殊情况……额 省了一半吧

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int i = 0, j = 1;
		for (; j < nums.size(); j++) {
			if (nums[i] == 0 && nums[j] != 0) {
				swap(nums[i], nums[j]);
			}
			if (nums[j] != 0) {
				swap(nums[++i], nums[j]);
			}
		}
	}
};