#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char c,x;
	
	printf("�п�J�j�g�^��");
	scanf_s("%c", &c);
	if ((int)c >= 65 && (int)c <= 90)
	{
		x = ((int)c + 32);
		printf("%c", x);
	}
	if ((int)c >= 97 && (int)c <= 122)
	{
		x = ((int)c - 32);
		printf("%c", x);
	}
	return 0;
}