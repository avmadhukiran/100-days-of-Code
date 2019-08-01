//DP:
// Two types of use cases
// Finding an optimal solution: FInd a large/small as possible
// Counting the number of solutions : We want to calculate the total number of possible solutions
// Coin Problem
//using recurssion
int solve(int x){
    if(x<0) return INF;
    if(x==0) return 0;
    int best = INF;
    for(auto c : coins){
        best = min(best, solve(x-c));
    }
    return best;
}

//Not an efficient solution because time complexity is close to 2^n

//Using memoization:
bool ready[N];
bool value[N];

int solve(int x){
    if(x<0) return INF;
    if(x == 0) return 0;
    if(ready[x]) return value[x];
    int best = INF;
    for(auto c : coins)
    {
        best = min(best, solve(x-c)+1);
    }
    value[x] = best;
    ready[x] = true;
    return value[x];
    
}

//iterative approach
value[0] = 0;
for(int x = 1; x <=n; x++){
    value[x] = INF;
    for(auto c : coins){
        if(x-c>=0){
            value[x] = min(value[x], value[x-c]+1);
        }
    }
}

//Constructing a solution
int first[N];
value[0]=0;
for(int x = 1; x<=n;x++){
    value[x] = INF;
    for(auto c: coins){
        if(x-c>=0 && value[x-c]+1 <value[x]){
            value[x] = value[x-c]+1;
            first[x]=c;
        }
    }
}

//to print the coins that appear in an optimal solution 
while(n>0){
    cout<<first[n]<<"\n";
    n-=first[n];
}


//counting the number of solutions
int count[N];
count[0] = 1;
for(int x =1 ; x<=n;x++){
    for(auto c: coins){
        if(x-c>=0){
            count[x]+=count[x-c];
        }
    }
}


//longest increasing subsequence
for(int k =0; k<n; k++){
    length[k]=1;
    for(int i = 0 ; i<k;k++){
        if(array[i] <array[k]){
            length[k]= max(length[k], length[i]+1);
        }
    }
}