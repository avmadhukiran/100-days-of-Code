//problem Statement : https://www.pramp.com/challenge/N5LYMbYzyOtbpovQoYPX
//Ques: Array is sorted but it is shifted with k distances 
/*Idea: Find the pivot, now we get two sorted parts apply the binary search for two halves
seperately
 */
//arr and num to search
#include<vector>
using namespace std;
int shiftedArrSearch(const vector<int> &shiftArr,int num){
    int high = 0;
    int low = 0;
    for(int i = 0 ; i<shiftArr.size()-1;i++){
        if(!(shiftArr[i]<shiftArr[i+1])){
            high = i;
        }
    }
    if( !(num>=shiftArr[low] && num<=shiftArr[high])){
        low = high+1;
        high = shiftArr.size();
    }
    while(low<=high){
        int  mid = (low+high)/2;
        if(num == shiftArr[mid]){
            return mid;
        }
        else if(num>shiftArr[mid])
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
     return -1;   
    }

}