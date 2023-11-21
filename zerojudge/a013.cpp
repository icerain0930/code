#include<bits/stdc++.h>
using namespace std;
//ZJ a013 
//by icerain
//M    CM  D   CD  C   XC L  XL X IX V IV I
//1000 900 500 400 100 90 50 40 10 9 5  4 1
string s;
int rm2num(string s){
    int sum = 0;
    for(int i=0;i<s.size();i++){
		if(s[i]=='M'){
			sum+=1000;
		}
		else if(s[i]=='D'){
			sum+=500;
		}
		else if(s[i]=='C'){
			sum+=s[i+1]=='D' || s[i+1]=='M' ? -100 : 100;
		}
		else if(s[i]=='L'){
			sum+=50;
		}
		else if(s[i]=='X'){
			sum+=s[i+1]=='C' || s[i+1]=='L' ? -10 : 10;
		}
		else if(s[i]=='V'){
			sum+=5;
		}
		else{
			sum+=s[i+1]=='X' || s[i+1]=='V' ? -1 : 1;
		}
	}
	return sum;
}
int num2rm(int a){
	string str="";
	int arr[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string rm[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int i=0;
	while(a){	
		while(arr[i]<=a){
			a=a-arr[i];
			str.append(rm[i]);
		}
		if(arr[i]>a)i++;
	}
	cout<<str<<endl;
}
int main(){
cin>>s;
while(s[0]!='#'){
	int a=0,b=0,sum=0;
	a = rm2num(s);
	cin>>s;
	b = rm2num(s);
	//abs
	a = abs(a-b);
	if(a==0){
		cout<<"ZERO\n";
	}
	else {
		num2rm(a);
	}
	//
	cin>>s;
}
return 0;
}
