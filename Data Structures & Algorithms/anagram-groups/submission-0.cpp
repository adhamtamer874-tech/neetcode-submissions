class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

	unordered_map<string, vector<string>>f;

	vector<vector<string>>ans;

	for (int i = 0;i < strs.size();i++)
	{
		string s = strs[i];
		sort(s.begin(), s.end());

		f[s].push_back(strs[i]);

		
	}

	for (const auto& pair : f)
	{
		ans.push_back(pair.second);
	}
	
	return ans;

}

};
