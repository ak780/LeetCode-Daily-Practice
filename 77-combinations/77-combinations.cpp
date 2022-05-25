class Solution {
public:           
    vector<vector<int>> vec;
    vector<int> temp;
    void helper(int n, int k, int start)
    {
        for(int i=start;i<=n+1;i++)
        {
             if(temp.size() == k)
             {
                 vec.push_back(temp);
                return;
             }
            temp.push_back(i);
            helper(n,k,i+1);
            temp.pop_back();
        }
        // vec.push_back(temp);
        return;
    }
    vector<vector<int>> combine(int n, int k) {               
        // vector<vector<int>> vec1;


        helper(n,k,1);
        return vec;
    }
};