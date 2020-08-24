

//Wenqi Zhao
//五毒神掌第一毒、
//给定一个 N 叉树，返回其节点值的前序遍历。



//Null代表下一个
//https://leetcode-cn.com/problems/n-ary-tree-preorder-traversal/solution/yi-tao-quan-fa-shua-diao-nge-bian-li-shu-de-wen--3/
//学！！！！！！！！！
//额 说真的没太看懂……先放一放吧




class Solution {
private:
	void travel(Node* root, vector<int>& result) {
		if (root == nullptr) {
			return;
		}

		result.push_back(root->val);
		for (Node* child : root->children) {
			travel(child, result);
		}
	}
public:
	vector<int> preorder(Node* root) {
		vector<int> result;
		travel(root, result);
		return result;
	}
};



//class Solution {
//public:
//	vector<int> preorder(Node* root) {
//
//		vector<int> v;
//
//		f(root, v);
//
//		return v;
//
//	}
//
//	void f(Node* root, vector<int>& v)
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//
//		v.push_back(root->val);
//
//		for (int i = 0; i < root->children.size(); i++)
//		{
//			f(root->children[i], v);
//		}
//	}
//};




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











