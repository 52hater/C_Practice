#include <stdio.h>

/* for문을 사용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성.

	1  2  3  4  5
	10 9  8  7  6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25

*/

int main(void) {

	int arrayList[5][5] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 0) {
				arrayList[i][j] = ++cnt;
			}
			else {
				arrayList[i][4-j] = ++cnt; // 보수를 생각
				/* 
					j = 0일 때: arrayList[1][4-0] = arrayList[1][4] = 6
					j = 1일 때: arrayList[1][4-1] = arrayList[1][3] = 7
					j = 2일 때: arrayList[1][4-2] = arrayList[1][2] = 8
					j = 3일 때: arrayList[1][4-1] = arrayList[1][1] = 9
					j = 4일 때: arrayList[1][4-4] = arrayList[1][0] = 10
				*/
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}