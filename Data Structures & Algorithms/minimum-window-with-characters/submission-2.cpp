class Solution {
public:
   





string minWindow(string s, string t) {

	string ans = "";

	int l = 0;
	int counter = 0;
	unordered_map<char, int>f, d;
	int a = 0;
	for (int i = 0;i < t.length();i++)
	{
		if (!f.contains(t[i]))
			a++;
		f[t[i]]++;

	}
	int min_len = INT_MAX; 
	int start_idx = -1;
	for (int r = 0;r < s.length();r++)
	{
		
		if (f.contains(s[r])) {
			d[s[r]]++;
			if (d[s[r]] == f[s[r]]) counter++;
		}



		while (counter == a) {
			if (r - l + 1 < min_len) {
				min_len = r - l + 1;
				start_idx = l;
			}


			if (f.contains(s[l])) {
				d[s[l]]--; 
				if (d[s[l]] < f[s[l]]) counter--;
			}


			l++;

		}

	}
	if (start_idx == -1)
		return "";

	return s.substr(start_idx, min_len);
}
};
