#include <stdio.h>

/* 사용자로부터 1~9 범위의 정수를 입력 받아 그 수만큼
   '*'를 출력하는 프로그램을 작성.
   사용자 입력이 범위를 넘어서면 강제로 보정.
   *(asterisk / 애스터리스크)는 한 행에 이어서 출력하고
   전체 출력이 끝나면 개행*/

int main(void) {

	int input = 0;
	scanf_s("%d", &input);

	if (input < 1 || input > 9) {
		puts("1~9 범위를 입력하시오");
		return 0;
	}

	// 위에랑 멀어져서 헷갈리면 선언을 밑에 해도 상관없지
	int i = 0;

	while (i < input) {
		//putchar('*');
		printf("*\t");
		i++;
	}
	//puts("");
	putchar('\n');

	return 0;
}