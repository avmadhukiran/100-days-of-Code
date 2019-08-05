#define N 10
vector<int> adj[N];

//maintains a visited array
bool visited[N]

void dfs(int s){
    if(visited[s]) return;
    else
    {
        visited = true;
        for(int i : adj[s])
        dfs(u);
    }    
}

//in BFS we use a queue, at each step the next node in Queue will be processed
queue<int> q;
bool visited[N];
int distance[N]
void BFS(int s){
    visited[s] = true;
    distance[x] = 0;
    q.push(x);

    while(!q.empyty()){
        int s = q.front(); q.pop();
        for(auto u : adj[s]){
            if(visited[u]) continue;
            visited[u] = true;
            distance[u] = distance[s]+1;
            q.push(u);
        }
    }
}
