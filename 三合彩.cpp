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
			cout<<"¤¤¼ú"<<endl; 
		}
		else if(a==d&&b==f&&c==e){
			cout<<"¤¤¼ú"<<endl; 
		}
		else if(a==e&&b==d&&c==f){
			cout<<"¤¤¼ú"<<endl; 
		}
		else if(a==f&&b==d&&c==e){
			cout<<"¤¤¼ú"<<endl; 
		}
		else if(a==e&&b==f&&c==d){
			cout<<"¤¤¼ú"<<endl; 
		}
		else if(a==f&&b==e&&c==d){
			cout<<"¤¤¼ú"<<endl; 
		}
		else{
			cout<<"¥¼¤¤¼ú"<<endl; 
		}		
	}
	if(n==1){
		char d,e,f;
		cin>>d>>e>>f;
		if(a==d&&b==e&&c==f){
			cout<<"¤¤¼ú"<<endl; 
		}
		else{
			cout<<"¥¼¤¤¼ú"<<endl; 
		}
	}	
} 
