#include<bits/stdc++.h>
using namespace std;
//by icerain

int main(){
long long n,c[10000],a[10000],r[10000],d[10000];
cin>>n;
for(int i=0;i<n;i++){
	cin>>c[i]>>a[i]>>r[i]>>d[i];
}
//===========
int t[9];
int i;

for(i=0;i<n;i++){
	if(c[i]==1){
		if(a[i]==0&&r[i]==0&&d[i]==0){
			t[0]=t[0]+1;
		}
		if(a[i]==1&&r[i]==1&&d[i]==1){
			t[1]=t[1]+1;
		} 
		if(a[i]==1&&r[i]==0&&d[i]==1){
			t[2]=t[2]+1;
			t[1]=t[1]+1;
		}
		if(a[i]==1&&r[i]==0&&d[i]==1){
			t[2]=t[2]+1;
			t[1]=t[1]+1;
		}
		if(a[i]==0&&r[i]==0&&d[i]==1){
			t[2]=t[2]+1;
			t[1]=t[1]+1;
		}
	}
	if(c[i]==2){
		if(a[i]==0&&r[i]==1&&d[i]==1){
			t[3]=t[3]+1;
			t[5]=t[5]+1;
		}
		if(a[i]==0&&r[i]==0&&d[i]==0){
			t[4]=t[4]+1;
		} 
		if(a[i]==0&&r[i]==0&&d[i]==1){
			t[3]=t[3]+1;
			t[5]=t[5]+1;
		}if(a[i]==0&&r[i]==1&&d[i]==0){
			t[3]=t[3]+1;
			t[5]=t[5]+1;
		}	
	}
	if(c[i]==3){
		if(a[i]==0&&r[i]==0&&d[i]==0){
			t[6]=t[6]+1;
		}
		if(a[i]==1&&r[i]==0&&d[i]==1){
			t[7]=t[7]+1;
		} 
		if(a[i]==0&&r[i]==1&&d[i]==1){
			t[8]=t[8]+1;
		}
		if(a[i]==0&&r[i]==0&&d[i]==1){
			t[7]=t[7]+1;
			t[8]=t[8]+1;
		}
		
	}
}
//=====
long long tt=1;
int j;

cout<<tt;
return 0;
}

