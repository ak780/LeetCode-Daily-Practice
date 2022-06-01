class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(s.size()>i)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size() == 0)
                    return false;
                char x = st.top();
                st.pop();
                if((s[i] == ')' && x!='('))
                   return false;
                else if((s[i] == '}' && x!='{'))
                   return false;
                else if((s[i] == ']' && x!='['))
                   return false;
            }
            i++;
        }
        if(st.size()>0)
            return false;
        return true;
    }
};