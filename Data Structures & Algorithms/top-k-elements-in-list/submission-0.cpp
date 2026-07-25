class Solution {
public:
    



vector<int> topKFrequent(vector<int>& nums, int k) {

	unordered_map<int, int>f;
	priority_queue<pair<int, int>>v;
	vector<int>ans;
	for (int i = 0;i < nums.size();i++)
	{
		f[nums[i]]++;
	}

	for (const auto& pair : f)
	{
		v.push({pair.second,pair.first});
	}


	for (int i = v.size() - 1;i >= 0&&k;i--)
	{

		ans.push_back(v.top().second);
		v.pop();
		k--;
	}
	return ans;



}

};
