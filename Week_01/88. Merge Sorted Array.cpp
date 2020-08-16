

//Wenqi Zhao
//五毒神掌第一毒
//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//复制一个num1来操作 或者从大数组屁股往前双指针（空间复杂度更好）
//遇到的特殊情况，第二个null ，负数情况，

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		// if (nums2) break;
		auto nums1Copy = nums1;
		int i = 0, j = 0, k = 0;    /*ijk三个变量来记录复制进去的数值角标*/
		for (; i < m && j < n; k++) {
			if (nums1Copy[i] < nums2[j]) {
				nums1[k] = nums1Copy[i];
				i++;
			}
			else {
				nums1[k] = nums2[j];
				j++;
			}
		}
		while (i < m) {
			nums1[k++] = nums1Copy[i++];
		}
		while (j < n) {
			nums1[k++] = nums2[j++];
		}
	}
};