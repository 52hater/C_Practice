#include <stdio.h>

/* for 문을 사용해 int[5] 배열에 저장된 값들을 오름차순으로 정렬하는 프로그램을 작성.
정렬 방식은 버블정렬 (최소 or 최대값 구하기의 반복) 알고리즘을 사용*/

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };

	// 외부for문은 사이클을 반복하는거고
	// 내부for문은 한사이클 도는 거
	// i가 idx 0, j가 idx 1로 초기화 되어있지

	// i < 4 로 하는 이유 : 기준요소가 4까지 갈 필요가 없지.
	// 기준요소의 변위(변하는 범위)가 인덱스 3까지만이니까
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			int temp = arrList[0];
			if (arrList[i] > arrList[j]) {
				temp = arrList[i];
				arrList[i] = arrList[j];
				arrList[j] = temp;
			}
		}
	}

	printf("sorted array : ");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", arrList[i]);
	}

	return 0;
}