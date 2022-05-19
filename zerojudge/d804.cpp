#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a > b;
}
int main(){
int n,m,sum=0,t=0;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i]; 
}
sort(a,a+n,cmp);
//由大排到小
for(int i=0;i<n;i++){
	sum+=a[i];
	t++;
	if(i==n-1 && sum<m)cout<<"OAQ\n";
	if(sum>=m){
	cout<<t<<endl;
	break;
	}
}

return 0;
}
