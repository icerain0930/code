#include<bits/stdc++.h> 
using namespace std;
//by icerain
int main(){
int a,b,c;
cin>>c>>a;
b=c-a;
	if(c==a){
		if(a-3<=3){
		cout<<a-3<<"+3"<<"="<<c<<endl;
		} 
		else{
			cout<<"3+"<<a-3<<"="<<c<<endl;
		}
	}
	else if(a>b){
		cout<<b<<"+"<<a<<"="<<c<<endl;
	}
	else{
		cout<<a<<"+"<<b<<"="<<c<<endl;
	}

return 0;
}


