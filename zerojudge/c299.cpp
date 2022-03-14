#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[101],b[101];
for(int i=0;i<n;i++){
	cin>>a[i];
}
sort(a,a+n);
int mi=a[0];
int ma=a[n-1];
bool test=true;
int tmp=a[0];
for(int j=1;j<n;j++){
	if(a[j]==tmp+1){
		tmp=a[j];
	}
	else {
		test=false;
		break;
	}
}

cout<<mi<<" "<<ma<<" ";
if(test==true){
	cout<<"yes\n";
}
else{
	cout<<"no\n";
}
return 0;
}
