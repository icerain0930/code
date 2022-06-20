#include<bits/stdc++.h>
using namespace std;
int main(){
	char a,b,c;
	int n;
	cin>>a>>b>>c;
	cin>>n;
	if(n==0){
		char d,e,f;
		cin>>d>>e>>f;
		if(a==d&&b==e&&c==f){
			cout<<"い綬"<<endl; 
		}
		else if(a==d&&b==f&&c==e){
			cout<<"い綬"<<endl; 
		}
		else if(a==e&&b==d&&c==f){
			cout<<"い綬"<<endl; 
		}
		else if(a==f&&b==d&&c==e){
			cout<<"い綬"<<endl; 
		}
		else if(a==e&&b==f&&c==d){
			cout<<"い綬"<<endl; 
		}
		else if(a==f&&b==e&&c==d){
			cout<<"い綬"<<endl; 
		}
		else{
			cout<<"ゼい綬"<<endl; 
		}		
	}
	if(n==1){
		char d,e,f;
		cin>>d>>e>>f;
		if(a==d&&b==e&&c==f){
			cout<<"い綬"<<endl; 
		}
		else{
			cout<<"ゼい綬"<<endl; 
		}
	}	
}  
