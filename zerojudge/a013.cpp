#include<bits/stdc++.h>
using namespace std;
//by icerain
bool test;
int main(){
int s=0,s2=0;
char a,b;

awa:
cin>>a>>b;
if(a!='#'&&b!='#')test=true;
else test=false;
while(test=true){
	switch(a){ //羅馬數字轉成啊拉伯數字 
		case 'M':{
			s=s+1000;
			break;
		}
		case 'D':{
			s=s+500;
			break;
		}  
		case 'C':{
			s=s+100;
			break;
		}
		case 'L':{
			s=s+50;
			break;
		}
		case 'X':{
			s=s+10;	
			break;
		}	
		case 'V':{
			s=s+5;		
			break;
		}
		case 'I':{
			s=s+1;	
			break;
		}
	}
	switch(b){ //羅馬數字轉成啊拉伯數字 
		case 'M':{
			s2=s2+1000;
			break;
		}
		case 'D':{
			s2=s2+500;
			break;
		}
		case 'C':{
			s2=s2+100;
			break;
		}
		case 'L':{
			s2=s2+50;
			break;
		}
		case 'X':{
			s2=s2+10;	
			break;
		}	
		case 'V':{
			s2=s2+5;		
			break;
		}
		case 'I':{
			s2=s2+1;	
			break;
		}
	}
	goto awa;	
}
cout<<s<<" "<<s2;
return 0;
}

