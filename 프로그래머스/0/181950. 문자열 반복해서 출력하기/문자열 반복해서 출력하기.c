#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 11

int main(void) {

	char str[LEN];

	int n;
	scanf("%s %d", &str, &n);
	for (int i = 0; i < n; i++)
	{

		printf("%s", str);


	}

	return 0;

}