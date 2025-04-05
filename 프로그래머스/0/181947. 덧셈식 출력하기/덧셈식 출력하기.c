#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

	int a, b, c;
	
	scanf("%d %d", &a, &b); //두 수 입력받기
	c = a + b;
	printf("%d + %d = %d", a, b, c);

	return 0;
}