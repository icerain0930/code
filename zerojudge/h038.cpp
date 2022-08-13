#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int a,b;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
	cin>>arr[i];
}
sort(arr,arr+a);
cin>>b;
cout<<arr[a-b];
return 0;
}
//
