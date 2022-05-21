class Solution {
public:
    void reverseString(vector<char>& s) {
          
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
        int len = s.size();
            int f = 0;
            int r = len-1;
            while(f<=len/2-1)
            {
                char temp = s[f];
                s[f] = s[r];
                s[r] = temp;
                f++;
                r--;
            }
        
    }
};
    
    