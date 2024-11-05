#include <stdio.h>

/* 1~10까지의 총합을 출력하는 프로그램을 작성.
   while 문과 for 문으로 각각 작성하며 반복회수는 10회로 제한.
   반드시 총합을 누적하는 변수를 활용할 것. */

int main(void) {
	
	int i = 0, result = 0;

	for (i = 1; i <= 10; i++) {
		result += i;
	}
	printf("%d\n", result);

	while (i < 10) {
		result += i;
		i++;
	}
	printf("%d\n", result);

	return 0;
}