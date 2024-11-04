#include <stdio.h>

/* 사용자로부터 두 정수를 입력 받아 뺄셈을 수행하고 결과를 출력하는 프로그램을 작성.
   단, 절대로 뺄셈 연산자를 사용하지 말고 비트 연산자를 이용해 구현.*/

int main(void) {
	int input1 = 0, input2 = 0;
	int result = 0;
	
	scanf_s("%d%d", &input1, &input2);

	// ~(틸드)붙이면 비트 NOT > 0과 1이 뒤집어짐 > 거기에 +1을하면 2의 보수가 됨 > input1과 더하면 input1-input2
	result = input1 + (~input2 + 1);

	printf("subtraction result : %d\n", result);

	// 짝수 홀수같은거 풀때는?
	// result % 2 = 0 이면 짝수
	// result & 0x00000001 했을때 result가 홀수면 0x00000001(1)이 나오고 짝수면 0x00000000(0)이 나옴
    // 왜냐하면 홀수는 2진수로 표현했을때 마지막 비트가 1이고, 짝수는 0이기 때문
    // AND 연산자(&)로 0x00000001과 비교하면 마지막 비트만 확인할 수 있다
	// 임베디드에서 환경에서는 이렇게 씀.

	// &는 비트연산자, &&는 논리연산자
	// &는 두 수의 각 비트를 비교하여 둘 다 1일 때만 1을 반환, 둘 중 하나라도 even이면 0을 반환하니까(false)
	// result값이 짝수라면 0을 반환해서 거짓이 되겠지
	// &&는 두 조건을 비교하여 둘 다 참일 때 1을 반환

	printf("subtraction result : %s\n", (result & 0x00000001) ? "oddNumber" : "evenNumber");

	return 0;
}