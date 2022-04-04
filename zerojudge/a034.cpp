#include<bits/stdc++.h>
using namespace std;
//by icerain 
int main(void) {
  int num, i;
  while(cin >> num) {
    int Array[16] = {0};
    for(i = 0; num != 0; i++) {
      Array[i] = num % 2;
      num /= 2;
    }
    for(i--; i >= 0; i--)
      cout << Array[i];
    cout << endl;
  }
}
