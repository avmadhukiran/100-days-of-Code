
//Adjacency List Represention
//For every vertex v, we keep track of all the vertices adjacent to that vertix V
//convinent way to store adjacency list is to declare a array of vector
vector<int> adj[N];

//stored as following
adj[1].push_back(2);
adj[1].push_back(3);

adj[4].push_back(2);

//if the graph is weighted graph
vector<pair<int,int>> adj[N];

adj[1].push_back({2,5});

adj[2].push_back({3,4});

adj[3].push_back({4,5});

adj[1].push_back({3,5});
// compute degree of V

//Adjacency Matrix representation

int adj[N][N];

//two entries for each edge
//given v and w can test easily if theres a connection btwn v and w


//Edge list representation
//contains all edges of a graph in some order. This is a convient way to represent a graph
//if the algorithm processes all edges of the graph
//not required to find edges that start at a given node
vector<pair<int,int>> edges;

edges.push_back({1,2});

edges.push_back({3,4});

edges.push_back({2,4});

//if it were an weighted graph
 vector<tuple<int,int,int>> edges;

 edges.push_back({1, 2, 5});
 
 edges.push_back({2, 3, 7});
 
 edges.push_back({2, 4, 5});