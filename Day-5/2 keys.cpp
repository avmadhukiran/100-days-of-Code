//leetcode :https://leetcode.com/problems/2-keys-keyboard/

int minSteps(int n){
    vector<int> solutions(n+1,0);
    for(int i = 0;i<=n;++i){
        if(i%j == 0 ){
            int solution = solutions[j]+(i/j);
            if(solutions[i] == 0 || solution<solutions[i]){
                solutions[i]=solution;
            }
        }
    }
    return solutions[n];
}