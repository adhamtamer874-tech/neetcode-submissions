class Solution {
public:
    

bool isPalindrome(string s) {
	string a="";
	int n = s.size();
	
	for (int i = 0;i < n;i++)
	{
		if (isalpha(s[i])||isdigit(s[i]))
		{
			a += tolower(s[i]);
		}
	}
	int q = a.size();
	for (int i = 0;i < q / 2;i++)
	{
		if (a[i] != a[q - i - 1])
		{
			return false;
		}
	}
	return true;


}

};
