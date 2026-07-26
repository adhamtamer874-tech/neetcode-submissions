class Solution {
public:



string encode(vector<string>& strs) {

	string s = "";
	for (int i = 0;i < strs.size();i++)
	{
		
		s += to_string(strs[i].length());
		s += "#";
		s += strs[i];
	}

	return s;

}



vector<string> decode(string s) {

	vector<string>ans;
	
	string a = "";
	int i = 0;
	for(int i=0;i<s.length();)
	{
		if (isdigit(s[i]))
		{
			a += s[i];
			i++;
		}
		else if(s[i]=='#')
		{
			
			int f = stoi(a);
			ans.push_back( s.substr(i+1,f));

			i = f +i + 1;

			a = "";
		}
		

		

	}
	return ans;
}


};
