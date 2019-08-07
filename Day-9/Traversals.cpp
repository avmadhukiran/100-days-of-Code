#define N 10
vector<int> adj[N];

//maintains a visited array
bool visited[N]

void dfs(int s){
    if(visited[s]) return;
    else
    {
        visited[s] = true;
        for(int u : adj[s])
        dfs(u);
    }    
}

//Time Complexity : DFS marks all vertices connected to S in time proportional to sum of their degrees
//in BFS we use a queue, at each step the next node in Queue will be processed
queue<int> q;
bool visited[N];
int distance[N]
void BFS(int s){
    visited[s] = true;
    distance[x] = 0;
    q.push(x);
 
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(auto u : adj[s]){
            if(visited[u]) continue;
            visited[u] = true;
            distance[u] = distance[s]+1;
            q.push(u);
        }
    }
}

//Time Complexity : BFS computes shortest paths (fewest edges possible)
//from s to all other vertices in a graph in time proportional to E + V

