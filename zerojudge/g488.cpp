#include<bits/stdc++.h>
using namespace std;

int covid(int x){
	if(x==1){
		return 1;
	}
	else{
		return covid(x-1)+x*x-x+1;
	}
} 

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int n;
cin>>n;
cout<<covid(n);

return 0;
}

