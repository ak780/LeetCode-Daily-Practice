class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h = nums.size()-1;
        int m=(l+h)/2;
        int ans=-1;
        while(l<=h)
        {
            if(nums[m]<target)
                l = m+1;
            else if(nums[m]>target)
                h = m-1;
            else
            {
                ans = m;
                break;
            }
            m = (l+h)/2;
        }
        return ans;
    }
};