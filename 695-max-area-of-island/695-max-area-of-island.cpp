// class Solution {
// public:
//     int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
//         int r = grid.size();
//         int c = grid[0].size();
//         queue<pair<int,int> q;
//         for(int i=0;i<r;i++)
//         {
//           for(int j=0;j<c;j++)
//           {
//               if(grid[i][j] == 1)
//               {
//               q.push(pair<i,j>);
//               while(q.size()>0)
//               {
                  
//               }
//           }

//         }
//     }
// };
    
    
    class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()) {
            return 0;
        }
        int H = grid.size();
        int W = grid[0].size();
        int answer = 0;
        auto inside = [&](int row, int col) {
            return 0 <= row && row < H && 0 <= col && col < W;
        };
        vector<pair<int,int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
        // vis[H][W]
        // vector<vector<bool>> vis(H, vector<bool>(W));
        for(int row = 0; row < H; row++) {
            for(int col = 0; col < W; col++) {
                if( grid[row][col] == 1) {
                    // answer++;
                    queue<pair<int,int>> q;
                    q.push({row, col});
                    grid[row][col] = 0;

                    int ctr=0;
                    while(!q.empty()) {
                        ctr++;
                        pair<int,int> p = q.front();
                        q.pop();
                        // p.first, p.second
                        for(pair<int,int> dir : directions) {
                            int new_row = p.first + dir.first;
                            int new_col = p.second + dir.second;
                            if(inside(new_row, new_col) && grid[new_row][new_col] == 1) {
                                q.push({new_row, new_col});
                                grid[new_row][new_col] = 0;
                            }
                        }
                    }
                    answer = max(answer,ctr);
                }
            }
        }
        return answer;
    }
};