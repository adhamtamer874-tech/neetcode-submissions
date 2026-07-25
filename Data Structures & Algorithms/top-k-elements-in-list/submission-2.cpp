class Solution {
public:
    






vector<int> topKFrequent(vector<int>& nums, int k) {

	unordered_map<int, int>f;
	
	vector<int>ans;
	vector<vector<int>>d(nums.size() + 1);
	for (int i = 0;i < nums.size();i++)
	{
		f[nums[i]]++;
	}

	for (const auto& pair : f)
	{
		d[pair.second].push_back(pair.first);
	}


	for (int i = nums.size();i>0 && k;i--)
	{

		for (int j = 0;j < d[i].size()&&k;j++)
		{
			ans.push_back(d[i][j]);
			k--;
		}
		
		
	}
	return ans;



}
};
