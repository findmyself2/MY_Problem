#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define len 1000001
int main(void) {

	// sol.1
	char str[len]; //입력 받을 문자열을 저장할 배열 15byte 공간 생성
	scanf("%s", str); //배열의 이름은 배열의 시작주소와 같다.
	printf("%s", str);


	/* sol.2
	printf("HelloWorld!");
	==
	puts("HelloWorld!");
	*/

	
	/* sol.3

	char* str = "HelloWorld";
	printf("%s", str); 
	*/

	return 0;

}