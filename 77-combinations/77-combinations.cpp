class Solution {
public:           
    vector<vector<int>> vec;
    void helper(int n, int k, vector<int>& temp)
    {
        for(int i=1;i<=n;i++)
        {
             if(temp.size() == k)
             {
                 vec.push_back(temp);
                return;
             }
            else if(temp.size()>=1 && temp[temp.size()-1]>=i)
                continue;
            temp.push_back(i);
            helper(n,k,temp);
            temp.pop_back();
        }
        // vec.push_back(temp);
        return;
    }
    vector<vector<int>> combine(int n, int k) {   
        vector<int> temp;            
        // vector<vector<int>> vec1;


        helper(n,k,temp);
        return vec;
    }
};