#include <stdio.h>
int main(void) {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<a-i+1;j++){
			putchar(' ');
		}
		for(int j=1;j<2*i;j++){
			putchar('*');
		}
		putchar('\n');
	}
return 0;
}


