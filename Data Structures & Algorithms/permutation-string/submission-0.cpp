class Solution {
public:
   

bool checkInclusion(string s1, string s2) {

	int a = s1.length();

	int l = 0;
	unordered_map<char, int>f,d;
	for (int i = 0;i < a;i++)
	{
		f[s1[i]]++;
	}
	

	for (int r = 0;r < s2.length();r++)
	{

		if (!f.contains(s2[r]))
		{

			//if (d == f) return true;

			l = r + 1;
			d.clear();
			
			continue;
		}
		

		d[s2[r]]++;

		while ((d[s2[r]] > f[s2[r]]))
		{
			d[s2[l]]--;
			l++;
		}

		//if (d == f) return true;
		if ((r - l + 1) == a) return true;
	}
	return false;

}

};
