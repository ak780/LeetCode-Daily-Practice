class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        int l=0,r=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(abs(nums[l])<=abs(nums[r]))
            {
                vec[i] = (nums[r]*nums[r]);
                r--;   
            }
            else
            {
               vec[i] = (nums[l]*nums[l]);
                l++;
            }
        }
        return vec;
    }
};