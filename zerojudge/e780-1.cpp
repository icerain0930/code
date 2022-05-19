#include<bits/stdc++.h>
using namespace std;
int main(){
int x=0,g,n,i,tg=0;
char j;
cin>>n;
for(i=0;i<n;i++){
	cin>>j;
	if(j=='L'){
		x=x-1;
	}
	if(j=='R'){
		x=x+1;
	}
	if(j=='Gift'){
		cin>>g;
		if(x==g){
			tg=tg+1;
		}
	}
}
cout<<tg;
return 0;
}

