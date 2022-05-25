class Solution {
public:
    void helper(vector<vector<int>>& vec, vector<int>& nums, vector<int>& temp)
    {
        if(temp.size() == nums.size())
        {
            vec.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(find(temp.begin(), temp.end(), nums[i])!=temp.end())
            {
                continue;
            }
            temp.push_back(nums[i]);
            helper(vec, nums, temp);
            temp.pop_back();
        }
        return;
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> vec;
        helper(vec,nums,temp);
    return vec;
    }
};