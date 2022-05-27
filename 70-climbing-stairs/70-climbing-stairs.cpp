class Solution {
public:
    
    map<int,int> mp;
    int climbStairs(int n) {
        if(mp.find(n) != mp.end())
            return(mp[n]);
        int res;
        if(n<3)
            res = n;
        else
        {
            res = climbStairs(n-1)+climbStairs(n-2);
        }
        mp[n] = res;
        return(res);
        
        
    }
    
    // int ctr=0;
    // int climbStairs(int n) {
    //     if(n < 0)
    //         return ctr;
    //     else if(n==0)
    //     {
    //         ctr++;
    //         return ctr;
    //     }
    //     climbStairs(n-1);
    //     climbStairs(n-2);
    //     return ctr;

};