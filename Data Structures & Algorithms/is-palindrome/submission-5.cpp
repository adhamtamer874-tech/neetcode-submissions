class Solution {
public:
    


bool isPalindrome(string s) {
	


	int l = 0;
	int r = s.size() - 1;


	while (l < r)
	{
		int c = 0;
		if (!isalnum(s[l]))
		{
			l++;
			c = 1;
		}
		if (!isalnum(s[r]))
		{
			r--;
			c = 1;
		}
		if (c)
			continue;


		if (tolower(s[l]) != tolower(s[r]))
		{
			return false;
		}
		l++;
		r--;


	}

	return true;

}

};
