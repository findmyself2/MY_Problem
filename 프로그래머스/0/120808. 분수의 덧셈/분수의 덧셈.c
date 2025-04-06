#include <stdio.h>
#include <stdlib.h>

// 최대공약수(GCD) 구하기 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2 * sizeof(int));
    
    // 두 분수 더하기: 통분
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    // 최대공약수로 기약분수 만들기
    int g = gcd(numer, denom);
    answer[0] = numer / g;
    answer[1] = denom / g;

    return answer;
}

int main(void) {
    int numer1, denom1, numer2, denom2;
    scanf("%d %d %d %d", &numer1, &denom1, &numer2, &denom2);

    // solution 함수가 malloc으로 만든 메모리 반환 → 포인터로 받아야 함
    int* result = solution(numer1, denom1, numer2, denom2);

    printf("[%d, %d]\n", result[0], result[1]);

    // 할당한 메모리 해제
    free(result);

    return 0;
}
