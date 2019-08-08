class DiGraph{
    private:
    int N;
    vector<int>* adj;
    public:
    DiGraph(int N){ 
        N = N;
        adj = new vector<int>(N);
    }
    void addEdge(int v, int w){
        adj[v].push_back(w);
    }
    
    vector<int> adjcacentVertices(int v){
        return adj[v];
    }
    int size(){
        return N;
    }
};
class DFO{
    private:
    bool *marked;
    stack<int> *reversePost;

    public:
    DFO(DiGraph G){
        reversePost = new stack<int>;
        marked = new bool[G.size()];
        for(int v = 0 ; v < G.size();v++){
            if(!marked[v]) dfs(G, v)  ;         
        }
        
    }

    void dfs(DiGraph G, int v){
        marked[v] = true;
        //visit all nodes first 
        for(auto w  : G.adj[v]){
            if( !marked[w]) dfs(G, w)
        }
        //After all recursive calls are done then we push into stack
        reversePost.push(v);
    }
    stack<int> reverSePost(){
        return reversePost;
    }
}