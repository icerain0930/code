#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
string s;
cin>>s; 
for(int i=1;i<11;i++){
	int c=s[i];
}
int a;
char m=s[0];
switch(s[0]){
	case'A':{ //第一個字母為A,轉換成10(a) 
		a=10;
		break;
	}
	case'B':{
		a=11;
		break;
	}
	case'C':{
		a=12;
		break;
	}
	case'D':{
		a=13;
		break;
	}
	case'E':{
		a=14;
		break;
	}
	case'F':{
		a=15;
		break;
	}
	case'G':{
		a=16;
		break;
	}
	case'H':{
		a=17;
		break;
	}
	case'I':{
		a=34;
		break;
	}
	case'J':{
		a=18;
		break;
	}
	case'K':{
		a=19;
		break;
	}
	case'L':{
		a=20;
		break;
	}case'M':{
		a=21;
		break;
	}
	case'N':{
		a=22;
		break;
	}
	case'O':{
		a=35;
		break;
	}case'P':{
		a=23;
		break;
	}case'Q':{
		a=24;
		break;
	}case'R':{
		a=25;
		break;
	}case'S':{
		a=26;
		break;
	}case'T':{
		a=27;
		break;
	}case'U':{
		a=28;
		break;
	}case'V':{
		a=29;
		break;
	}
	case'W':{
		a=32;
		break;
	}
	case'X':{
		a=30;
		break;
	}
	case'Y':{
		a=31;
		break;
	}
	case'Z':{
		a=33;
		break;
	}	
}
int b=a/10; 
int d=a%10; 
int sum; 
sum=b+(d*9)+(s[1]-48)*8+(s[2]-48)*7+(s[3]-48)*6+(s[4]-48)*5+(s[5]-48)*4+(s[6]-48)*3+(s[7]-48)*2+(s[8]-48)*1+(s[9]-48);

if(sum%10==0){
	cout<<"real";
}
else{
	cout<<"fake";
}
return 0;
}

