#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
int a,b,c,a1,b1,c1;
cin>>a1>>b1>>c1;
int max=a1;
if(b1>max&&b1>c1){
	c=b1;
	if(a1>c1){
		a=c1;
		b=a1;
	}
	else{
		a=a1;
		b=c1;
	}
}
else if(c1>max&&c1>b1){
	c=c1;
	if(a1>b1){
		a=b1;
		b=a1;
	}
	else{
		a=a1;
		b=b1;
	}
}
else{
	c=a1;
	if(b1>c1){
		a=c1;
		b=b1;
	}
	else{
		a=b1;
		b=c1;
	}
}
if(a+b<=c)cout<<a<<" "<<b<<" "<<c<<"\n"<<"No\n";
else if(a*a+b*b<c*c)cout<<a<<" "<<b<<" "<<c<<"\n"<<"Obtuse\n";
else if(a*a+b*b==c*c)cout<<a<<" "<<b<<" "<<c<<"\n"<<"Right\n";
else if(a*a+b*b>c*c)cout<<a<<" "<<b<<" "<<c<<"\n"<<"Acute\n"; 

return 0;
}

