#include <stdio.h>

/* 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성.
   정수는 부호가 있는 32비트 정수로 한정하며 scanf_s() 함수로 한 번에 한 값만 입력받고
   내부적으로 최댓값을 계속 갱신하는 구조로 작성.*/
   // ***굉장히 중요한 예제***
   // 계속 override해서 최댓값이 저장되도록 유도
int main(void) {

	int input = 0, max = 0;
	scanf_s("%d", &input);

	max = input; // 비교할 대상이 없으니 바로 집어넣고

	scanf_s("%d", &input);
	max = (max > input) ? max : input;

	scanf_s("%d", &input);
	max = (max > input) ? max : input;

	printf("max : %d\n", max);

	return 0;
}