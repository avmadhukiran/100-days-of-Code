//Number of paths in a grid
int sum[N][N];

for(int y =1; y<=n;y++){
    for(int x =1 ; x<=n; x++){
        sum[y][x] = max(sum[y][x-1],sum[y-1][x])+value[y][x];
    }
}


//knapsack problem 

//Naive recurssion solution
int knacpSack(int n,int c){
    if(n == 0 || c==0)
        return 0;
    else if(w[n]>C){
        return knacpSack(n-c, C)
    }
    else
    {
        int temp1 = knacpSack(n-1,C);
        int temp2 = v[N]+ knacpSack(n-1, c-w[n]);
        return max(temp1, temp2);
    }
    
}

//Using Dp
int memo[n][C] ;
int kSdp(int n,int c){
    if(memo[n][c] !=0) return memo[n][c];
    if(n == 0 || c==0){
        return 0;
    }
    else if(w[n]>c){
        return kSdp(n-1,c);
    }
    else
    {
        int temp1 = kSdp(n-1,C);
        int temp2 = v[N]+kSdp(n-1, c-w[n]);
        memo[n][c] = max(temp1, temp2);
    }
    return memo[n][c];
    
}
possible[0][0] = true;
for(int k = 1; k<=n;k++){
    for(int x = 0; x<=W;x++){
        if(x-w[k] >=0) possible[x][k] |= possible[x-w[k]][k-1]
    }
}