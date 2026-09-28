class Solution {
public:
    
   
vector<vector<int>> all_subsets;

void generate_subsets(vector<int>& nums, vector<int>& current, int start = 0) {
    all_subsets.push_back(current);



    for (int i=start;i<nums.size();i++) {
        current.push_back(nums[i]);
        generate_subsets(nums,current,i+1);
        current.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> current;
    generate_subsets(nums, current, 0);
    return all_subsets;
}
};
