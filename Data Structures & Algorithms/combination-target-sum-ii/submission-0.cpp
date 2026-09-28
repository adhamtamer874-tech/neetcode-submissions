class Solution {
public:
    vector<vector<int>>ans;

    void helper(vector<int>& nums, vector<int>& current, int target, int sum, int start) {

        if (sum == target) {
            ans.push_back(current);
            return;
        }
        if (sum > target) return;
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            current.push_back(nums[i]);
            sum += nums[i];
            helper(nums, current, target, sum, i+1);
            current.pop_back();
            sum -= nums[i];
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        helper(candidates, current, target, 0, 0);
        return ans;
    }
};
