class Solution {
public:
    


bool isPalindrome(string s) {
	


	int l = 0;
	int r = s.size() - 1;


	while (l < r)
	{
		int c = 0;
		if (!isalpha(s[l]) && !isdigit(s[l]))
		{
			l++;
			c = 1;
		}
		if (!isalpha(s[r]) && !isdigit(s[r]))
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
