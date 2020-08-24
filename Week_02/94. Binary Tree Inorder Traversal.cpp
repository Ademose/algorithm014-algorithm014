

//Wenqi Zhao
//五毒神掌第一毒、
//Given a binary tree, return the inorder traversal of its nodes' values.


//https://leetcode-cn.com/problems/binary-tree-inorder-traversal/solution/die-dai-fa-by-jason-2/
//https://leetcode-cn.com/problems/binary-tree-inorder-traversal/solution/che-di-chi-tou-er-cha-shu-de-qian-zhong-hou-xu-di-/




class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> nodes;
		inorder(root, nodes);
		return nodes;
	}
private:
	void inorder(TreeNode* root, vector<int>& nodes) {
		if (!root) {
			return;
		}
		inorder(root->left, nodes);
		nodes.push_back(root->val);
		inorder(root->right, nodes);
	}
};


//递归三条件！
//确定递归函数的参数和返回值：
//确定终止条件
//每一层的逻辑




