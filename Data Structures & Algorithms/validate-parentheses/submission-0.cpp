class Solution {
public:
    
bool isValid(string s) {

	stack<char>ans;
	for (int i = 0;i < s.length();i++)
	{
		if (ans.empty())
			ans.push(s[i]);
		else if (ans.top() == '{')
		{
			if (s[i] == '}')
			{
				ans.pop();
			}
			else
				ans.push(s[i]);
		}
		else if (ans.top() == '[')
		{
			if (s[i] == ']')
			{
				ans.pop();
			}
			else
				ans.push(s[i]);
		}
		else if (ans.top() == '(')
		{
			if (s[i] == ')')
			{
				ans.pop();
			}
			else
				ans.push(s[i]);
		}

	}



	if (ans.empty())
		return true;

	return false;









}

};
