#include<bits/stdc++.h>
using namespace std;
//ZJ a003
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int m,d,s;
cin>>m>>d;
s = (m*2+d)%3;
switch(s){
	case 0:
		cout<<"´¶³q\n";
		break;
	case 1:
		cout<<"¦N\n";
		break;
	case 2:
		cout<<"¤j¦N\n";
		break; 
}
return 0;
}

