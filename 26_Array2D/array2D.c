#include <stdio.h>

/* �Ʒ� �迭 ����� ��, �� ������ ������ ���� ����ϴ� ���α׷� �ۼ�.
   
   10 20 30 60 
   40 50 60 150
   50 70 90 210

*/

// ��ƴ� �����...
// for��ø ��� �����ؾ߰ھ�
// �� ������ְ� �� ������ְ� �ϴ� ������ �����߾�
// rowSum���� ������ �������ְ� ���� �����ϴ� ������� �ص� �ǰ��� �ٵ� �̰� �� ����ѵ�

int main(void) {

	int arrayList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	// ����°�� ������ְ� ���� ��(�ܺ�for��)
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			arrayList[2][j] += arrayList[i][j];
		}
	}

	// �׹�°�� ������ְ� ���� ��(�ܺ�for��)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arrayList[i][3] += arrayList[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}