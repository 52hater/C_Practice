#include <stdio.h>
int main(void) {
    /* do-while문과 while문의 차이점 학습
       - do-while: 조건 검사 전 무조건 한번은 실행
       - while: 조건 검사를 먼저하고 실행 여부 결정 */

    // getchar() 입력버퍼에 대해서 공부해

    char ch = '\0'; // char ch = 0; 과 같음.
    // 배열은 초기화 시킬때 예를들면
    // char str[10] = {'\0'}; // 모든 엘리먼츠를 null로 초기화
    // char str[10] = "";     // 빈 문자열로 초기화
    // int arr[10] = {0};     // 모든 엘리먼츠를 0으로 초기화
    // 이런식으로 초기화 시키고

    // 부분초기화는
    // int arr[5] = {1, 2}; // {1, 2, 0, 0, 0}
    // char str[5] = "hi"; // {'h', 'i', '\0', '\0', '\0'} 처럼 초기화 시킴.

    printf("=== do-while 문 실행 ===\n");
    do {
        ch = getchar();    // 문자 입력
        putchar(ch);       // 입력받은 문자 출력
    } while (ch != 'x');   // x가 입력될 때까지 반복

    printf("\n=== while 문 실행 ===\n");
    while ((ch = getchar()) != 'x') {  // x가 입력될 때까지 반복
        putchar(ch);                   // 입력받은 문자 출력
    }

    return 0;

    // do-while문
    //ch가 이미 'x'여도 무조건 한 번은 실행, 이후 조건검사, x면 종료 (x 입력해보면 일단 x 출력함)

    // while문
    // ch가 'x'면 조건이 거짓이므로 사용자 입력을 받지 않고 바로 종료(x 입력하면 x출력하지 않고 바로 종료됨)
}