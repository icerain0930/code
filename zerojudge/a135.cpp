#include<bits/stdc++.h>
using namespace std;
//ZJ a135
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
string s;
int a = 1;
cin>>s;
while(s != "#"){
	if(s == "HELLO")cout<<"Case "<<a<<": ENGLISH\n";
	else if(s == "HOLA")cout<<"Case "<<a<<": SPANISH\n";
	else if(s == "HALLO")cout<<"Case "<<a<<": GERMAN\n";
	else if(s == "BONJOUR")cout<<"Case "<<a<<": FRENCH\n";
	else if(s == "CIAO")cout<<"Case "<<a<<": ITALIAN\n";
	else if(s == "ZDRAVSTVUJTE")cout<<"Case "<<a<<": RUSSIAN\n";
	else cout<<"Case "<<a<<": UNKNOWN\n";
	a++;
	cin>>s;
}
return 0;
}
