class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        // vector<int> vec;
        vector<vector<int>> vec_ans;
        if(nums.size() < 3) return vec_ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int h=nums.size()-1;
            if(i==0 || nums[i]!=nums[i-1])
            {
                while(l<h)
                {
                    if(nums[l] + nums[h] + nums[i] == 0)
                    {
                        // vec.push_back(nums[l]);
                        // vec.push_back(nums[h]);
                        // vec.push_back(nums[i]);
                        vec_ans.push_back({nums[l],nums[h],nums[i]});
                        // vec.clear();
                        while(l<h && (nums[l] == nums[l+1])) l++;
                        while(l<h && (nums[h] == nums[l-1])) h--;
                        l++;
                        h--;
                    }
                    else if((nums[l] + nums[h] +nums[i]) > 0) h--;
                            else l++;
                }
            }
        }
                          return vec_ans;

    }
};