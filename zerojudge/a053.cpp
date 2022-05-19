#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,s;
cin>>n;
if(0<=n&&n<=10)s=n*6;
else if(11<=n&&n<=20)s=60+(n-10)*2;
else if(21<=n&&n<=40)s=80+(n-20);
else if(n>=40)s=100;cout<<s;
return 0;
}

