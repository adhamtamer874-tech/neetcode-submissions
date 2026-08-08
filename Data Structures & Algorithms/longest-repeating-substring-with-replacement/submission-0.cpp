class Solution {
public:
   
int characterReplacement(string s, int k) {
	int l = 0;
	int ans = 0;
	unordered_map<char, int>f;
	
	int c = 0;


	for (int r = 0;r < s.length();r++)
	{
		f[s[r]]++;
		c = max(c, f[s[r]]);
		
		while ((r - l + 1) - c > k)
		{
			f[s[l]]--;
			l++;
		}
		ans = max(ans, (r - l + 1));


	}

	return ans;
}
};
