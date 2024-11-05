#include <stdio.h>

/* 1~10까지 총합을 출력하는 프로그램을 작성.
   while문과 for문으로 각각 작성하며 반복회수는 10회로 제한.
   반드시 총합을 누적하는 변수를 활용할 것.*/

int main(void) {

	int i = 0, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	// while문은 하나의 조건만 평가
	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	return 0;
}