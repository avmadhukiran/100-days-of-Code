// problem statement : https://www.pramp.com/challenge/N5LYMbYzyOtbpovQoY7X

#include<iostream>
#include<vector>
using namespace std;

//We are passing the memo for all the recursive calls
int numOfPathRec(int n, int i, int j, vector<vector<int>> &memo){
    
    if(i<0 || j<0){   
        return 0;
    }
    else if(i<j){
        memo[i][j]=0;
    }
    else if(i ==0 && j ==0){
        memo[i][j]=1;
    }
    else if(memo[i][j] != -1)
    {
        return memo[i][j];
    }
    else{
        int totalDown = numOfPathRec(n,i-1,j,memo);
        int totalRight = numOfPathRec(n,i,j-1,memo);
        memo[i][j] = totalRight+totalDown;
       
    }
     return memo[i][j];
}
 int numOfPathToDest(int n){
        vector<vector<int>> memo(n,vector<int>(n,-1));
        return numOfPathRec(n,n-1,n-1,memo);
    }