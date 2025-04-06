#include <stdio.h>
#include <stdlib.h>

// C에서 배열 길이는 함수로 전달해줘야 함
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(numbers_len * sizeof(int));

    for (size_t i = 0; i < numbers_len; i++) {
        answer[i] = numbers[i] * 2;
    }

    return answer;
}

int main(void) {
    int numbers[] = { 1, 2, 100, -99, 1, 2, 3 };
    size_t len = sizeof(numbers) / sizeof(numbers[0]);

    int* result = solution(numbers, len);

    // 결과 출력
    printf("[");
    for (size_t i = 0; i < len; i++) {
        printf("%d", result[i]);
        if (i < len - 1) printf(", ");
    }
    printf("]\n");

    free(result); // 동적 메모리 해제

    return 0;
}