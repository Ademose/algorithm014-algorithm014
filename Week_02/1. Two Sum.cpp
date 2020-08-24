

//Wenqi Zhao
//五毒神掌第三毒、
//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。



//终于理解了单哈希，一定两个都在数组才能出结果，因此不会漏的！




class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> m;
		for (int i = 0; i < nums.size(); i++)
		{
			if (m.find(target - nums[i]) != m.end())     return { m[target - nums[i]], i };

			m[nums[i]] = i;
		}
		return {};
	}
};







