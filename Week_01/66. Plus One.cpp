

//Wenqi Zhao
//五毒神掌第一毒、
//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。

//考虑特殊情况！9结尾 以及9999情况。
//pushback简直精髓中的精髓

//暴露问题！特殊情况考虑不周全，不过这个题的中文翻译真的烂的不行

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		while (n > 0 and digits[n - 1] == 9) {
			digits[n - 1] = 0;
			n--;
		}
		if (n == 0) {
			digits[0] = 1;
			digits.push_back(0);
			return digits;
		}
		else digits[n - 1] += 1;
		return digits;
	}
};
