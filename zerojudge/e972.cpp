#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
double a,b,d;
char c;
cin>>a>>b>>c;
switch(c){
	case 'T':{
		a=a*1.00;
		break;
	}
	case 'U':{
		a=a/30.90;
		break;
	}
	case 'J':{
		a=a/0.280;
		break;
	}
	case 'E':{
		a=a/34.50;
		break;
	}
} 
if(a-b>0){
	if(a-b>=0.05){
	cout<<c<<" "<<fixed<<setprecision(2)<<a-b+d<<endl;
	}
	else{
		cout<<c<<" 0.00"<<endl;
	}
}
else{
	cout<<"No Money"<<endl;
}
return 0;
}

