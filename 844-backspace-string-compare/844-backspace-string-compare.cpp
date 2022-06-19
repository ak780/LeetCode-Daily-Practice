class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int a=0,b=0,x;
        while(b<s.size())
        {
            if(s[b] == '#')
            {
                if(a>0)
                a--;
                b++;
                x=0;
            }
            else
            {
            s[a] = s[b];
            a++;
            b++;
                x=1;
            }
        }
            a--;
        cout<<s<<a;
        int c=0,d=0;
         while(d<t.size())
        {
            if(t[d] == '#')
            {
                if(c>0)
                c--;
                d++;
                x=0;
            }
            else
            {
            t[c] = t[d];
            c++;
            d++;
                x=1;
            }
        }
            c--;
        while(a>=0 && c>=0)
        {
            if(s[a]!=t[c])
                return false;
            a--;
            c--;
        }
        if(a!=-1 || c!=-1)
            return false;
        return true;
    }
};