#include <stdio.h>

/* 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성.
   정수는 부호가 있는 32비트 정수로 한정하며 scanf_s() 함수로 한 번에 한 값만 입력받고
   내부적으로 최댓값을 계속 갱신하는 구조로 작성. (9_의 서바이벌 방식)
   반드시 if문을 사용할 것*/

// main 함수에서의 리턴은 return 0; (정상종료) 뿐임
// 다른 함수를 호출했다면 호출한 함수에서 결과값을 리턴받아오는것이지

int main(void) {

	int input = 0, max = 0;
	
	scanf_s("%d", &input);
	max = input;

	scanf_s("%d", &input);
	if (input > max) {
		max = input;
	}

	scanf_s("%d", &input);
	if (input > max) {
		max = input;
	}

	printf("%d\n", max);

	return 0;
}