#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
double bmi,w,h;
cin>>w>>h;
bmi=w/((h/100)*(h/100));
cout<<fixed<<setprecision(1)<<bmi<<endl;
return 0;
}

