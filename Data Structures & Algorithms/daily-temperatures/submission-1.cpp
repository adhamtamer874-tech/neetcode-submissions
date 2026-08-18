class Solution {
public:
    

vector<int> dailyTemperatures(vector<int>& temperatures) {
	vector<int>ans(temperatures.size());
	stack<pair<int, int>>f;
	for (int i = 0;i < temperatures.size();i++)
	{
		while(!f.empty() && temperatures[i] > f.top().first)
		{
			ans[f.top().second] = i - f.top().second;
			f.pop();
		}
		f.push({ temperatures[i],i });
	}
	
	return ans;
}

};
