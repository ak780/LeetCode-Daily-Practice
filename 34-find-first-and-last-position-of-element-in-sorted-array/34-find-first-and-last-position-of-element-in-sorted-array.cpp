class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1,-1};
        int l =0,r=nums.size()-1;
        int mid;
        if(nums.size() == 0)
            return ans;
        while(l<r)
        {
            mid = (l+r)/2;
            if(target>nums[mid])
            {
                l = mid+1;
            }
            else
            r=mid;
        }
        if(nums[l] == target)
            ans[0] = l;
        r = nums.size()-1;
        while(l<r)
        {
            mid = (l+r)/2+1;
            if(target<nums[mid])
            {
                r = mid-1;
            }
            else
            l=mid;
        }
        if(nums[r] == target)
            ans[1] = r;
        return ans;
    }
};