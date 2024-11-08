#include <stdio.h>

/* for문을 사용해 int[5] 배열에 저장된 값 중 가장 작은 값을 찾아 출력하는 프로그램을 작성.
   int[0] 요소에 최솟값이 저장될 수 있도록 개발.
   각 배열 요소를 비교하는 과정에서 두 배열 요소의 값은 덮어써서 사라지지 않도록 교환(교환? > 임시변수 써야지).
   (((신발끈 공식))) */

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };

	for (int i = 0; i < 5; i++) {
		if (arrList[0] > arrList[i]) {
			int tmp = arrList[0];
			arrList[0] = arrList[i];
			arrList[i] = tmp;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", arrList[i]);
	}

	puts("");
	return 0;

	// 이러면 10 40 30 50 20 이 됐지? 그 다음은? > "정렬"
}