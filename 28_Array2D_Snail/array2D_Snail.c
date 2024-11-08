#include <stdio.h>

/* for���� ����� int[5][5] �迭�� ������ ���� �����ϴ� ���α׷��� �ۼ�.

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
				arrayList[i][4-j] = ++cnt; // ������ ����
				/* 
					j = 0�� ��: arrayList[1][4-0] = arrayList[1][4] = 6
					j = 1�� ��: arrayList[1][4-1] = arrayList[1][3] = 7
					j = 2�� ��: arrayList[1][4-2] = arrayList[1][2] = 8
					j = 3�� ��: arrayList[1][4-1] = arrayList[1][1] = 9
					j = 4�� ��: arrayList[1][4-4] = arrayList[1][0] = 10
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