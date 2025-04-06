#include <stdio.h>


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;

    if (num1 == num2)
    {
        answer = 1;
    }
    else if (num1 != num2)
    {
        answer = -1;
    }

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