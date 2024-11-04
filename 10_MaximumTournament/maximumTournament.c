#include <stdio.h>

/* 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성.
   정수는 부호가 있는 32비트 정수로 한정하며 scanf_s()함수로
   한 번에 세 값을 모두 입력 받아야 함. 최댓값은 printf() 함수로 출력*/

// 이 방식이 좀 더 코드 길이가 짧아 보이지만 확장성이 떨어짐
// 입력받는 개수가 늘어나면 점점 복잡해짐
// 서바이벌 방식을 차용해서 반복문을 주면 가장 간결하고 논리적으로 확장성까지 챙겨갈 수 있지.

int main(void) {

	int input1 = 0, input2 = 0, input3 = 0, max = 0;

	scanf_s("%d%d%d", &input1, &input2, &input3);

	max = (input1 > input2) ? input1 : input2;
	max = (max > input3) ? max : input3;
	
	printf("max : %d\n", max);

	return 0;
}