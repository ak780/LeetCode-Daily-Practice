class Solution
{
    public:
        void helper(string &arr, vector<string>& vec, int start)
        {
            if (arr.size() == start)
            {
                vec.push_back(arr);
                return;
            }
            if (arr[start] >= '0' && arr[start] <= '9')
            {
                helper(arr, vec, start + 1);
                return;
            }
            arr[start] = tolower(arr[start]);
            helper(arr, vec, start + 1);
            arr[start] = toupper(arr[start]);
            helper(arr, vec, start + 1);
            return;
        }

    vector<string> letterCasePermutation(string s)
    {
        vector<string> vec;
        helper(s, vec, 0);
        return vec;
    }
};