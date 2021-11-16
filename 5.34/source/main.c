#include<stdio.h>
#include<stdlib.h>
int power(int m, int n)
{  

	if (n == 0)
		return 1;
	if(n>=1)
		return  m * power(m, n-1); 
	}
int main()
{
	int m, n,r;
	printf("¿é¤J¨â¼Æ");
	scanf_s("%d %d", &m, &n);
	r = power(m, n);
	printf("m^n=%d", r);
}