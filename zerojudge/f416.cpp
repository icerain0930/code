#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,t,len;
string a,b;
cin>>n;
cin>>a>>b;
int lena=a.length();
int lenb=b.length();
for(int i=0;i<lenb;i++){
	test:
	if(b[i]==a[0]){
		for(int j=0;j<lena;j++){
			if(b[i+j]==a[j]){
				len++;
				if(len==lena-1){
					t++;
					goto test;
				}
			}
		}
	}
}
cout<<t;
return 0;
}

