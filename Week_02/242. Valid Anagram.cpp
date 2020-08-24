

//Wenqi Zhao
//五毒神掌第一毒、
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

//首先长度相等
//用hash来存储，记得看注释掉的。
//因为确定小写字母，26格子数组即可
//哈希本质上是一一对应，因此数组也可以理解为某种哈希表




class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length()) return false;
		int n = s.length();
		int counts[26] = { 0 };
		for (int i = 0; i < n; i++) {
			counts[s[i] - 'a']++;    //如何字符串变数字！！！！！！！！！！！！
			counts[t[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++)
			if (counts[i]) return false;
		return true;
	}
};




//class Solution {
//public:
//	bool isAnagram(string s, string t) {
//		if (s.length() != t.length()) return false;
//		int n = s.length();
//		unordered_map<char, int> counts;
//		for (int i = 0; i < n; i++) {
//			counts[s[i]]++;
//			counts[t[i]]--;
//		}
//		for (auto count : counts)
//			if (count.second) return false;
//		return true;
//	}
//};
