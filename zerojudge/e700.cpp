#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O�u��
int a,b;
char c;
while(cin>>a>>c>>b){
	a=a*100+b;
	if(121<=a && a<=219)cout<<"���~�y"<<endl;
	else if(220<=a && a<=320)cout<<"�����y"<<endl;
	else if(321<=a && a<=420)cout<<"�d�Ϯy"<<endl;
	else if(421<=a && a<=521)cout<<"�����y"<<endl;
	else if(522<=a && a<=621)cout<<"���l�y"<<endl;
	else if(622<=a && a<=722)cout<<"���ɮy"<<endl;
	else if(723<=a && a<=821)cout<<"��l�y"<<endl;
	else if(822<=a && a<=923)cout<<"�B�k�y"<<endl;
	else if(924<=a && a<=1023)cout<<"�ѯ��y"<<endl;
	else if(1024<=a && a<=1122)cout<<"���Ȯy"<<endl;
	else if(1123<=a && a<=1222)cout<<"�g��y"<<endl;
	else cout<<"���~�y"<<endl;
}
return 0;
}

