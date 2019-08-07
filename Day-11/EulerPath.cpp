// If all the edges are visited exactly once then it is said to have a eular path
// if it startign vertex and ending vertex is same in such a path then it is a eular circuit

//In a eular path all the vertex will have a even degree
//and also it should be a connected graph

/* The function returns one of the following values 
   0 --> If grpah is not Eulerian 
   1 --> If graph has an Euler path (Semi-Eulerian) 
   2 --> If graph has an Euler Circuit (Eulerian)  */


bool isEular(vector<int> adj[]){
    int odd = 0;
    for(int i = 0  ; i < adj.size();i++){
        if(adj[i].size() & 1)
            odd++;
    }

    if(odd>2){
        return 0;
    }
    return 1;
}