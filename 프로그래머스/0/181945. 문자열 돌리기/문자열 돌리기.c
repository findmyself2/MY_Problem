#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 11

int main(void){

	char s1[LEN];
	

	scanf("%s", s1);
	int len;
	len = strlen(s1); //문자열의 길이를 반환해준다
	for (int i = 0; i < len; i++) {

		printf("%c\n", s1[i]);
		
	}
	

	return 0;
}