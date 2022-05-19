#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0]<<endl;
    if(a[i]+1==a[i+1]){
   		cout<<a[i]<<" "<<a[i+1]<<" "<<"yes\n";
	}
	else{
		cout<<a[i]<<" "<<a[i+1]<<" "<<"no\n";
	}
    
    return 0;
    
}


