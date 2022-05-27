class Solution {
public:
    int rob(vector<int>& nums) {
            int dp[nums.size()+1];
        if(nums.size() == 1)
            return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        int i;
        for(i=2;i<nums.size();i++)
        {
            dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[i-1];

        
    }
};