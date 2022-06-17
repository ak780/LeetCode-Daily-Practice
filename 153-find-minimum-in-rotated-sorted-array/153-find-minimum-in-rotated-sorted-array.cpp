class Solution {
public:
    int findMin(vector<int>& nums) {
       int left = 0, right = nums.size() - 1;
        while(left+1 < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]){
                left = mid;
            }
            else if(nums[mid] < nums[left]){
                right = mid;
            }
            else
                return nums[left];
        }
        return min(nums[left],nums[right]);
    }
};