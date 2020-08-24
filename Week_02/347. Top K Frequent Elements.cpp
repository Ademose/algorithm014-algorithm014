

//Wenqi Zhao
//五毒神掌第一毒、
//给定一个非空的整数数组，返回其中出现频率前 k 高的元素。

//桶排序+优先队列
//同样可以使用最小堆


class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		unordered_map<int, int> map;
		for (int num : nums) {
			map[num]++;
		}

		vector<int> res;
		priority_queue<pair<int, int>> pq;    //频率，数字
		for (auto it = map.begin(); it != map.end(); it++) {
			pq.push(make_pair(it->second, it->first));
			if (pq.size() > (int)map.size() - k) {
				res.push_back(pq.top().second);
				pq.pop();
			}
		}
		return res;
	}
};





