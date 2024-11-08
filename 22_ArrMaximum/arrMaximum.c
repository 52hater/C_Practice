#include <stdio.h>

/* for문을 사용해 int[5] 배열에 저장된 값 중 가장 큰 값을 찾아 출력하는 프로그램을 작성.
   최댓값이 저장된 변수는 int nMax로 선언. */

int main(void) {

	int arr1[5] = { 50, 40, 10, 50, 20 };

	int nMax = arr1[0]; // 얘를 for문 내부에 초기화를 시키면 루프될때마다 50으로 초기화 되겠지

	for (int i = 0; i < 5; i++) {
		if (arr1[i] > nMax) {
			nMax = arr1[i];
		}
	}

	printf("max : %d\n", nMax);

	return 0;
}