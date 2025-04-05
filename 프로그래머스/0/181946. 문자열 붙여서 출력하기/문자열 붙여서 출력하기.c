#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 11
#define LEN2 11
int main(void){

	char s1[LEN];
	char s2[LEN2];

	scanf("%s %s", s1, s2);

	printf("%s%s", s1, s2);

	return 0;
}