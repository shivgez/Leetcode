class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());   // Step 1

        for (int i = 1; i < nums.size(); i++) { // Step 2
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
