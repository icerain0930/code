#include<bits/stdc++.h>
using namespace std;
//by icerain
//f312 APCS 10
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int a1,b1,c1,a2,b2,c2,n,temp;
cin>>a1>>b1>>c1>>a2>>b2>>c2>>n;
int y1[101],y2[101];
y1[0]=a1*0*0+b1*0+c1;
y2[0]=n*n*a2+b2*n+c2;
temp=y1[0]+y2[0];
for(int k=0;k<n;k++){
	int x1=k,x2=n-k;
	y1[k]=a1*x1*x1+b1*x1+c1;
	y2[k]=x2*x2*a2+b2*x2+c2;
	if(temp<(y1[k]+y2[k])){
		temp=y1[k]+y2[k];
	}
}
cout<<temp;
return 0;
}

