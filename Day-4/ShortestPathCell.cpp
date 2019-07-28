
//problem statement : https://www.pramp.com/challenge/Y56aZmaj9Ptmd9wV9xvL
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// to traverse arcoss all the directions this would avoid re write of the code
const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};
int shortestCellPath(const vector<vector<int>>& grid, int sr,int sc, int tr, int tc){
    //Get the size of rows  and cols
    int n= grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> q;

    //initialise a distance vector to keep track of the distance 
    vector<vector<int>> dis(grid.size(), vector<int>(grid[0].size(), INT_MAX/2));
    // Visited vector to keep track of seen 
    vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size()));
    q.push({sr,sc});
    dis[sr][sc] = 0;
    visited[sr][sc] = true;
    while(!q.empty()){
        pair<int,int> curNode = q.front();
        q.pop();
        for(int i = 0 ; i<4;i++){
            int x1 = curNode.first + dx[i];
            int y1 = curNode.second + dy[i];
            if(0 <=x1 && x1<n && 0<=y1 && y1<m && grid[x1][y1] ==1 &&
            !visited[x1][y1]){
            dis[x1][y1] = dis[curNode.first][curNode.second]+1;
            q.push({x1,y1});
            visited[x1][y1] =true;                
            }
        }
    }
    //If the distance to tr and tc is not reacheable return -1
    if(dis[tr][tc] == INT_MAX/2){
        return -1;
    }
    return dis[tr][tc];
}