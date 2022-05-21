class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        unordered_map<char,int> mp;
                unordered_map<char,int> mp2;
        for(auto i : s1)
        {
            mp[i]++;
        }int l=0,r = s1.size()-1;
        for(int i=l;i<=r;i++)
        {
            mp2[s2[i]]++;
        }
        while(r<s2.size())
        {
            int f = 0;
            for(auto i:mp)
            {
                if(mp2[i.first] == i.second)
                    f = 1;
                else
                {
                    f=0;
                break;
                }
                
            }
            if(f == 1)
            {
                return true;
            }
            mp2[s2[l]]--;
             if(mp2[s2[l]] == 0)
                mp2.erase(s2[l]);
            l++;
            r++;
            mp2[s2[r]]++; 
        }
return false;
    }
};