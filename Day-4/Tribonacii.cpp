//simple problem to solved using dp
long long memo[38];
int tribonacci(int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    else if(memo[n] ==0){
        memo[n] = tribonacci(n-1)+tribonacci(n-1)+tribonacci(n-3);
    }
    return memo[n];
}