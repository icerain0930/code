#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m,a,b,temp[2],time[2];
temp[0]=0;
time[0]=0;
string s,s1,s2; 
cin>>n>>m; 
for(int i=0;i<m;i++){
	cin>>s1>>a>>b;
	time[1]=a/b;
	if(b<=m){
	temp[1]=(m/b)*a;	
	} 
	if(temp[1]>temp[0]){
		temp[0]=temp[1];
		s=s1;
	}
	if(time[1]>time[0]){
		s2=s1;
	}
	
}
cout<<temp[0]<<endl;
cout<<s2<<endl;

return 0;
}

