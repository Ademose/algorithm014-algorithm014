

//Wenqi Zhao
//五毒神掌第二毒
//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		if (nums.size() == 1) return 1;
		int j = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[j] != nums[i]) {
				nums[++j] = nums[i];
			}
		}
		return ++j;

	}
};

//授之以渔： 通过记录重复数字和修改位置 
//class Solution {
//public:
//	int removeDuplicates(vector<int>& A) {
//		int count = 0;
//		for (int i = 1; i < A.size(); i++) {
//			if (A[i] == A[i - 1]) count++;
//			else A[i - count] = A[i];
//		}
//		return A.size() - count;
//	}
//};