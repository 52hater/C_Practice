#include <stdio.h>

/* for문을 사용해 int[5] 배열에 저장된 값들을 오름차순으로 정렬하는 프로그램을 작성.
   정렬 방식은 선택정렬 알고리즘을 사용. */

/* selection sort : 버블은 바로교환 / 선택정렬은 제일 작은것의 인덱스만 따져놓고 교환은 바깥쪽 루프가 한번 돌 때
   그 때 딱 한번만 한다.
   idxMin = 0; > 비교해가면서 최소값이 저장된 인덱스와 비교하면서 간다.
   for문 진행하면서 최소값 만나면 idxMin 갱신
   그 후 idxMin이랑 시작점(기준요소?)과 교환. */

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };
	int idxMin = 0; // 가장 적은 값이 저장된 곳이 0번 요소다 가정하고 시작, i로 초기화 하는것이고 이제 그럼 j가 나머지 싹 돌면 되겠지.

	// 이거 반복for문 약간 헷갈리네.. 계속 복습
	for (int i = 0; i < 4; i++) {
		idxMin = i;
		for (int j = i + 1; j < 5; j++) {
			if (arrList[idxMin] > arrList[j]) {
				idxMin = j;
			}
		}
		if (idxMin != i) {
			int temp = arrList[i];
			arrList[i] = arrList[idxMin];
			arrList[idxMin] = temp;
		}

		printf("sorted array : ");
		for (int i = 0; i < 5; i++) {
			printf("%d\t", arrList[i]);
		}
		puts("");
	}
	return 0;
}