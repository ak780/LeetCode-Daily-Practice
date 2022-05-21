class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int c, int r, int curr)
    {
        if(sr<0 || sc<0 || sr>r || sc>c || image[sr][sc] != curr || newColor == curr)
            return;
        image[sr][sc] = newColor;
        dfs(image,sr-1, sc, newColor,c,r,curr);
        dfs(image,sr+1, sc, newColor,c,r, curr);
        dfs(image,sr, sc+1, newColor,c,r, curr);
        dfs(image,sr, sc-1, newColor,c,r, curr);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int c = image[0].size()-1;
        int r = image.size()-1;
        int curr = image[sr][sc];
       dfs(image,sr,sc,newColor,c,r,curr);
        return image;
        
    }
};