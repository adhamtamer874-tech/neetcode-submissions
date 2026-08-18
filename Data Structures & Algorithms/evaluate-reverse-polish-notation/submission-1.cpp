class Solution {
public:
 

int evalRPN(vector<string>& tokens) {
	
	int ans = 0;
	stack<int>f;

	for (int i = 0;i < tokens.size();i++)
	{
		int a = 0;
		
		if (tokens[i] == "+")
		{
			int r = f.top();
			f.pop();
			int l = f.top();
			f.pop();

			f.push(l+r);
		

		}
		else if (tokens[i] == "-")
		{
			
			int r = f.top();
			f.pop();
			int l = f.top();
			f.pop();

			f.push(l - r);
			

			

		}
		else if (tokens[i] == "*")
		{
			int r = f.top();
			f.pop();
			int l = f.top();
			f.pop();

			f.push(l * r);


		}
		else if (tokens[i] == "/")
		{
			int r = f.top();
			f.pop();
			int l = f.top();
			f.pop();

			f.push(l / r);
		}
		else
		{
			int d = stoi(tokens[i]);
			f.push(d);
		}

		if (i == tokens.size() - 1)
		{
			ans=f.top();
		}
	}

	return ans;
}
};
