

//Wenqi Zhao
//五毒神掌第一毒、
//Given an n-ary tree, return the level order traversal of its nodes' values.

//Nary - Tree input serialization is represented in their level order traversal, each group of children is separated by the null value(See examples).



//深度优先算法，记得看广度优先
//全tm忘没了 就这样吧 明天再干！


class Solution {
public:
	vector<vector<int>> result;

	void dfs(Node* root, int dep) {
		if (!root) return;
		if (dep == result.size()) result.emplace_back();
		result[dep].push_back(root->val);
		auto children = root->children;
		for (auto ele : children) {
			dfs(ele, dep + 1);
		}
	}
	vector<vector<int>> levelOrder(Node* root) {
		dfs(root, 0);
		return result;
	}
};





//class Solution {
//public:
//	int depth = 0;
//	vector<vector<int>> levelOrder(Node* root) {
//		findDepth(root, 0);
//		vector<vector<int>> res(depth); //初始化数组
//		queue<Node*> q;
//		q.push(root);
//		for (int m = 0; m < depth; ++m) { // 以层为单位遍历整棵树
//			int layer = q.size();
//			for (int i = 0; i < layer; ++i) { // 迭代处理当前层的每个节点
//				res[m].push_back(q.front()->val);
//				for (auto j : q.front()->children) { // 将当前层的children压入队列
//					q.push(j);
//				}
//				q.pop();
//			}
//		}
//		return res;
//	}
//	void findDepth(Node* root, int d) { //寻找深度，用以初始化数组
//		if (!root)   return;
//		++d;
//		for (auto i : root->children) {
//			findDepth(i, d);
//		}
//		depth = max(d, depth);
//	}
//};