#include<bits/stdc++.h>
using namespace std;
//by icerain
struct school{
	string name;
	int cl;
	int num;
	string sf;
}sch;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>sch.name;
	cin>>sch.cl;
	cin>>sch.num;
	cin>>sch.sf;
	cout<<sch.cl<<" "<<sch.num<<" "<<sch.name<<endl;
	cout<<sch.sf<<endl;
}
return 0;
}

