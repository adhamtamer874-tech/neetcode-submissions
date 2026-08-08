class Solution {
public:
    
int lengthOfLongestSubstring(string s) {
	

	int ans = 0;
	int l = 0;
	unordered_set<int>f;
	for (int r = 0;r < s.length();r++)
	{
		while (f.contains(s[r]))
		{
			f.erase(s[l]);
			l++;
		}

		f.insert(s[r]);
		ans = max(ans, r - l+1);
	}
	return ans;
}

};
