// Def. vertices v n w are connected if there is path between them

// Preprocess graph to answer queries of the form is v connted to w
//in constant time?
//https://os.mbed.com/questions/2495/How-to-declare-and-initialize-array-in-a/

#include<iostream>
using namespace std;
//inorder to declare a array in class we need to initialise a pointer to it
//use new operator to dynamically allocate the size new vector<int>(N) or new int[N]
class Graph{
    private:
    int N;
    vector<int>* adj;
    public:
    Graph(int N){ 
        N = N;
        adj = new vector<int>(N);
    }
    void addEdge(int v, int w){
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    
    vector<int> adjcacentVertices(int v){
        return adj[v];
    }
    int size(){
        return N;
    }
};

class CC{
    private:
        int N;
        bool* marked;
        int* id;
        int count;
        void dfs(Graph G, int v){
            marked[v]= true;
            id[v] = count;
            for(int w: G.adjcacentVertices(v)){
                if(!marked[w]){
                    dfs(G,w);
                }
            }
        }
    public:
    CC(Graph G){
        marked = new bool[G.size()];
        id = new int[G.size()];
        count =0;

        for(int v=0; v<G.size();v++){
            if(!marked[v]){
                dfs(G,v);
                count++;
            }
        }
    }
    
};