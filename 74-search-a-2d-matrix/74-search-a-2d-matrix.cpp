class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix[0].size();
                    int ans=-1;

        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][size-1]>=target)
            {
                int l=0,h = size-1;
            int m=(l+h)/2;
            while(l<=h)
            {
                if(matrix[i][m]<target)
                    l = m+1;
                else if(matrix[i][m]>target)
                    h = m-1;
                else
                {
                    ans = m;
                    break;
                }
                m = (l+h)/2;
              }
                break;
            }
        }
        if(ans==-1)
            return false;
            return true;
    }
};