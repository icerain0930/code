#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int s,n,a[10];
cin>>n;
s=n%1000;
for(int i=0;i<9;i++){
	a[i]=n%10;
	n=n/10;
}
sort(a,a+9);
if((a[7]*a[7]+a[8]*a[8])==s){
	cout<<"Good Morning!\n";
}
else cout<<"SPY!\n";
return 0;
}

