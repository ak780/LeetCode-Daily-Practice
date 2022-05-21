class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0,r=0,ctr=0,ans=0,t=0;
        while(r<s.size())
        {
            if(mp.find(s[r]) == mp.end() || mp[s[r]] == 0)
            {
                mp[s[r]]++;
                ctr++;
                r++;
            }
            else
            {
                mp[s[r]]++;
                while(s[l] != s[r])
                {
                    mp[s[l]]--;
                    l++;
                    ctr--;
                }
                // if(t==0)
                    // ctr--;
                mp[s[l]]--;
                l++;
                r++;
            }
            ans = max(ans,ctr);
        }
        return ans;
    }
};