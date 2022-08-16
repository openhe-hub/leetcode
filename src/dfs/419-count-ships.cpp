#include <bits/stdc++.h>
#define SHIP 'X'
#define BLANK '.'
using namespace std;

class Solution {
public:
    int height,width;
    vector<vector<bool>> vis;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    int dfs(vector<vector<char>> &board,int x,int y){
        if(x<0||x>=height||y<0||y>=width||vis[x][y]||board[x][y]==BLANK) return 0;
        else{
            vis[x][y]=true;
            for (int i = 0; i < 4; ++i) {
                dfs(board,x+dx[i],y+dy[i]);
            }
            return 1;
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        height=board.size();
        width=board[0].size();
        int cnt=0;
        for (int i = 0; i < height; ++i) {
            vector<bool> tmp;
            for (int j = 0; j < width; ++j) {
                tmp.push_back(false);
            }
            vis.push_back(tmp);
        }

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cnt+=dfs(board,i,j);
            }
        }
        return cnt;
    }
};

int main(){

    return 0;
}