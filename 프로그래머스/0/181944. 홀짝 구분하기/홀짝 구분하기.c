#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void){

	int a;

	scanf("%d", &a);

	if (a % 2 == 0) //a를 2로 나누었을 때 나머지가 0이면 짝수
	{
		printf("%d is even", a);
	}
	else if (a % 2 != 0)
	{
		printf("%d is odd", a);

	}
	return 0;
}