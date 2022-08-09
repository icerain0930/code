#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int a;
char c[7]={'a','b','c','d','e','f','g'};
while(cin>>a&&a!=0){
	do{
	    for(int i=0;i<a;i++)cout<<c[i];
	    cout<<endl;
	}while(next_permutation(c,c+a));
}
return 0;
}

