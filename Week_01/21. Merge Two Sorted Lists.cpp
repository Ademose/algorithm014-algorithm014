

//Wenqi Zhao
//五毒神掌第一毒
//Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.
//思路重新指一指

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		auto PreNode = new ListNode(-1);
		auto PreHeard = PreNode;

		while (l1 != nullptr && l2 != nullptr) {  /*||不可 会返回空节点报错 已尝试*/
			if (l1->val < l2->val) {
				PreNode->next = l1;
				l1 = l1->next;
				PreNode = PreNode->next;
			}
			else {
				PreNode->next = l2;
				l2 = l2->next;
				PreNode = PreNode->next;
			}
		}
		if (l1 == nullptr) PreNode->next = l2;	/*必须处理最后的某一个非空结点*/
		if (l2 == nullptr) PreNode->next = l1;

		return PreHeard->next;
	}
};
