#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



int solution(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
}

int main(void)
{

    int n1, n2;
    int result = 0;
    scanf("%d %d", &n1, &n2);
    result = solution(n1, n2);

    printf("%d", result);
    

    return 0;
}