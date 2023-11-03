#include<bits/stdc++.h>
using namespace std;
//ZJ d659
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
int n,i=1,a[3];
cin>>n;
while(n--){
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<"Case "<<i<<": "<<a[1]<<endl;
	i++;
}
return 0;
}
