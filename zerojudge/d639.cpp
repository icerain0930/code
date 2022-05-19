#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long n;
cin>>n;
int a[n];
n=n-1;
a[0]=1;
a[1]=1;
a[2]=1;
for(int i=3;i<=n;i++){
	a[i]=a[i-1]+a[i-2]+a[i-3];
} 
cout<<a[n];
return 0;
}

