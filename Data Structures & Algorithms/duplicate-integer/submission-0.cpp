class Solution {
public:
    
bool hasDuplicate(vector<int>& nums)
{
	unordered_set<int>f;
	for (auto i :nums)
	{
		if (f.count(i))
		{
			return true;
		}
		f.insert(i);

	}

	return false;


}
};