#include <stdio.h>


int solution(int num1, int num2) {
    int answer = 0;

    answer = (int)(((double)num1 / num2) * 1000);
    return answer;
}


int main(void)
{

    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);

    int result;

    result = solution(num1, num2);

    printf("%d", result);

    return 0;
}