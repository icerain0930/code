#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int y;
bool test=false;

cin>>y;
if(y%400==0){
	test=true;
	}
else if(y%4==0){
	if(y%100==0)test=false;
	else test=true;
}
else test=false;
//
if(test)cout<<"a leap year\n";
else cout<<"a normal year\n";

return 0;
}

