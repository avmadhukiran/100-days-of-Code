//For Complete search using Recurrsion
#include<vector>
vector<vector<int>> subsets;
vector<int> subset;
void search(int k){
    if(k == n){
        subsets.push_back(subset);
    }
    else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back(k);
    }
}
//Using Bit Operators
for(int b =0;b< (1<<n);b++){
    vector<int> subset;
    for(int i = 0; i<n;i++){
        if(b&(1<<i)) subset.push_back(i);
    }
}

//this code goes through all subset of a set of n elements

for(int b = 0 ; b< (1<<n);b++){
    //process subset
}

//Generating permutations

void search(){
    if(permutation.size() == n){
        //process permutation
    }
    else
    {
        for(int i = 0 ; i< n;i++){
            if(choosen[i] == true) continue;
            choosen[i] = true;
            permutation.push_back(i);
            search();
            choosen[i] = false;
            permutation.pop_back();
        }
    }
    
}

//Using STL library
vector<int> permutations
for(int i = 0 ; i<n;i++){
    permutation.push_back(i);
}

do{

} while(next_permutation(permutation.begin(), permutation.end()))

//Back Tracking counting queens 
// y is rows and x is columns
void search(int y){
    if(y == n){
        count++;
        return;
    }
    for(int x = 0; x<n; x++){
        if(column[x] || diag1[x+y] || diag2[x-y+n-1] ) continue;
        search(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}
