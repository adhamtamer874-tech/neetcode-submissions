class Solution {
public:
    
string longestCommonPrefix(vector<string>& strs) 
{
	if (strs.empty()) return "";
	string s = strs[0];
	for (int i = 0;i < s.size();i++)
	{
		char b = s[i];

		for (int j = 1;j < strs.size();j++)
		{
			if (i == strs[j].size() || strs[j][i] != b)
			{
				return s.substr(0, i);
			}
		}
	}
	return s;
}

};