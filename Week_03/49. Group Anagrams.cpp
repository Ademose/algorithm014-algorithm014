

//Wenqi Zhao
//五毒神掌第一毒、
//给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。。



//说真的感觉C++写这种东西真的复杂并且可读性差，看了好久才能明白，从新写出来对目前的我来说基本不可能，明天加油搞定这个！！！！！！！！！




class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> mp;
		for (string s : strs) {
			mp[strSort(s)].push_back(s);
		}
		vector<vector<string>> anagrams;
		for (auto p : mp) {
			anagrams.push_back(p.second);
		}
		return anagrams;
	}
private:
	string strSort(string s) {
		int counter[26] = { 0 };
		for (char c : s) {
			counter[c - 'a']++;
		}
		string t;
		for (int c = 0; c < 26; c++) {
			t += string(counter[c], c + 'a');
		}
		return t;
	}
};


//class Solution {
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		vector<vector<string>> res;
//		int sub = 0;  //结果vector的下标值
//		string tmp; //临时string
//		unordered_map<string, int> work; //判断排序后单词是否存在，即字母组成是否一致
//		for (auto str : strs)
//		{
//			tmp = str;
//			sort(tmp.begin(), tmp.end());
//			if (work.count(tmp))
//			{
//				res[work[tmp]].push_back(str);
//			}
//			else
//			{
//				vector<string> vec(1, str);
//				res.push_back(vec);
//				work[tmp] = sub++;
//			}
//		}
//		return res;
//	}
//};
//





//class Solution {
//public:
//	vector<int> res;
//	vector<int> preorder(Node* root) {
//		if (!root)   return res;
//		res.push_back(root->val);
//		for (auto i : root->children) {
//			preorder(i);
//		}
//		return res;
//	}
//};











