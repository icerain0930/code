#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,k,m1,m2;
cin>>n;
char a[n][n],t='0';
cin>>k;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		a[i][j]='0';
	}
}
for(int i=0;i<k;i++){
	cin>>m1>>m2;
	a[m2][m1]='x';//x
}

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(a[j][i]=='0'){
			for(int l=-1;l<2;l++){
				for(int m=-1;m<2;m++){
					if(a[j-l][i-m]=='x'){
						t=t+1;
						a[j][i]=t;
					} 
				}
			}
		}
	}
}


for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<a[i][j];
	}
	cout<<" "<<endl;
}

return 0;
}

