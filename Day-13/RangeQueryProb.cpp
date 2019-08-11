#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){	
	    int n;
	    cin>>n;
	    int a[n];
	    int h[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    //set<int> h;
	    for(int i = 0 ; i<n;i++){
	        cin>>h[i];
	    }
	    int b[n];
	    for(int i =0 ; i<n;i++){
	       b[i]=0;
	    }
	    for(int i = 0 ; i < n ; i++){
	        int left=max(0,i-a[i]);
	        int right = min(n,i+a[i]);
	        if(right+1<n) b[right+1]+=-1;
	        b[left]+=1;
	    }
	    int sum = 0;
	    for(int i = 0 ; i < n ; i++){
	        sum = sum+b[i];
	        a[i]=sum;
	    }
	  
	    int flag = 0;
	    sort(a,a+n);
	    sort(h,h+n);
	   for(int i = 0 ; i< n ; i++){
	       if(a[i]!=h[i]) {
	        flag=1;break;   
	       }
	   }
	   if(flag ==1){
	       cout<<"NO";
	   }
	   else{
	       cout<<"YES";
	   }
	    cout<<endl;
	}
	// your code goes here
	return 0;
}