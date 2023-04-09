#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);
int main(void)
{
	unsigned int number;
	printf("%s", "Enter an integer: ");
	scanf("%u", &number);
 	unsigned long long int result = fibonacci(number);
	printf("Fibonacci(%u) = %llu\n", number, result);
}

unsigned long long int fibonacci(unsigned int n)
{
	long long int tmp,a=0,b=1;
	for(int i=0;i<n;i++){
		tmp = a + b;
		b = a;
		a = tmp;
	}
	return tmp;
}
