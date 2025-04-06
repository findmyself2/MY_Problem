#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //strlen과 strcpy를 사용하기 위해 추가

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len_my_string = strlen(my_string);
    int len_overwrite_string = strlen(overwrite_string);

    

    char* answer = (char*)malloc(len_my_string +1 ); //+1은 null
    strcpy(answer, my_string);
    for (int i = 0; i < len_overwrite_string; i++)
    {
        answer[s + i] = overwrite_string[i];
    }

    answer[len_my_string] = '\0';

    return answer;
}


int main(void)
{
    
    char my_string[1001], overwrite_string[1001];
    int s;
    
    scanf("%s %s %d", my_string, overwrite_string, &s);
    char* result = solution(my_string, overwrite_string, s);
    printf("%s\n", result);

    free(result);

    return 0;
}