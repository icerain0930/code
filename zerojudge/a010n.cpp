#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
int a,i;
cin>>a;
while((a/2)!=0){
	i=i+1;
	a=a/(2*i);	
}
cout<<i;
return 0;
}

