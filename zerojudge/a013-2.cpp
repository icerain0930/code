#include<bits/stdc++.h>
using namespace std;
//by icerain
string a,b;
int sa,sb;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b;
n=a.length();
m=b.length();
while(a!='#'){
for(int i=0;i<n;i++){
	switch(a[i]){
		case 'M':{
			s+=1000;
			break;
		}
		case 'D':{
			s+=500;
			break;
		}
		case 'C':{
			s+=100;
			break;
		}
		case 'L':{
			s+=50;
			break;
		}
		case 'X';{
			s+=10;
			break;
		}
		case 'V';{
			s+=5;
			break;
		}
		case 'I';{
			s+=1;
			break;
		} 
	}
}
} 
return 0;
}

