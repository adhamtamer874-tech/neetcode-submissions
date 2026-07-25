class Solution {
public:
   bool isAnagram(string s, string t) 
{
	if (s.length() != t.length())
		return false;
	unordered_map<int, int>f;
	for (auto i : s)
	{
		f[i]++;
	}

	for (auto j : t)
	{
		if (f[j] == 0)
		{
			return false;
		}
		f[j]--;
	}

	return true;


}
};
