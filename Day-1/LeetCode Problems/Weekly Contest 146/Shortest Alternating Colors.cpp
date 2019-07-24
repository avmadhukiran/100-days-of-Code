//https://leetcode.com/problems/shortest-path-with-alternating-colors/submissions/

typedef pair<int, int> ii;
const int N = 110;
const int INF = 1<<29;
int dp[N][2];
//array of vectors
vector<int> a[N],b[N];

class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& R, vector<vector<int>>& B) {
        
        for(int i = 0 ; i<n; ++i){
            dp[i][0] = dp[i][1] = INF;
            a[i].clear();
            b[i].clear();
        }
        
        dp[0][0] = dp[0][1] = 0;
        for(auto it : R){
            int u = it[0], v = it[1];
            a[u].push_back(v);
        }
        for(auto it : B){
            int u = it[0], v = it[1];
            b[u].push_back(v);
        }
        queue<ii> Q;
        Q.push({0,0});
        Q.push({0,1});
        while(!Q.empty()){
            int u = Q.front().first;
            int c = Q.front().second;
            cout<<u<<" "<<c<<endl;
            Q.pop();
            if(c==0){
                for(auto v : b[u]){
                    if(dp[v][1-c] != INF) continue;
                    // cout<<dp[v][1-c]<<" "<<dp[u][c]<<endl;
                    dp[v][1-c] = dp[u][c]+1;
                    Q.push({v, 1-c});
                }
            }
            else{
                for(auto v: a[u]){
                    if(dp[v][1-c] != INF) continue;
                    
                    // cout<<dp[v][1-c]<<" "<<dp[u][c]<<endl;
                    dp[v][1-c] = dp[u][c]+1;
                    Q.push({v,1-c});
                }
            } 
        }
        vector<int> ret(n);
        for(int i  = 0 ; i < n; ++i){
            ret[i]=min(dp[i][0], dp[i][1]);
            if(ret[i] == INF) ret[i]= -1;
        }
        return ret;
    }  
};