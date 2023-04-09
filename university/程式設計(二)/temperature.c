#include <stdio.h>
int main(void) {
	char c;
	float a;
	c = getchar();
	while(c!='q' && c!='Q'){ 
		if(c=='f'||c=='F'){
			scanf("%f",&a);
			getchar();
			a=(a-32)*5/9;
			printf("%.2f¢XC\n",a);
		}
		else if(c=='c'||c=='C'){
			scanf("%f",&a);
			getchar();
			a=(1.8*a)+32;
			printf("%.2f¢XF\n",a);
		}
		else{
			puts("¿é¤J¿ù»~");
		}
		c = getchar();
	}
return 0;
}
