#include <stdio.h>

/* 사용자로부터 세 정수를 입력 받아 총합을 출력.
   사용자 입력이 저장되는 변수 하나와
   값을 누적하는 변수 하나만 사용해 구현*/

   // accumulation : 누적

int main(void) {

	int input = 0;
	int acc = 0;

	// for(초기식; 조건식; 증감식) {}
	// scanf_s()가 반복문 밖에 있으면 반복문과 상관없이 한번만 실행되지 > 반복문 안에 있어야지
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &input);
		acc += input;
	}

	printf("total result : %d\n", acc);

	return 0;
}