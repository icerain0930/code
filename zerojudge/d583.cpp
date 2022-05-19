#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long a[1000001];

long long n,i,j;
while(cin>>n){

for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
for(j=0;j<n;j++){
cout<<a[j]<<" ";
}
cout<<"\n"; 

}
return 0;
}
