#include <stdio.h>

/* for���� ����� int[5] �迭�� ����� ������ ������������ �����ϴ� ���α׷��� �ۼ�.
   ���� ����� �������� �˰����� ���. */

/* selection sort : ������ �ٷα�ȯ / ���������� ���� �������� �ε����� �������� ��ȯ�� �ٱ��� ������ �ѹ� �� ��
   �� �� �� �ѹ��� �Ѵ�.
   idxMin = 0; > ���ذ��鼭 �ּҰ��� ����� �ε����� ���ϸ鼭 ����.
   for�� �����ϸ鼭 �ּҰ� ������ idxMin ����
   �� �� idxMin�̶� ������(���ؿ��?)�� ��ȯ. */

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };
	int idxMin = 0; // ���� ���� ���� ����� ���� 0�� ��Ҵ� �����ϰ� ����, i�� �ʱ�ȭ �ϴ°��̰� ���� �׷� j�� ������ �� ���� �ǰ���.

	// �̰� �ݺ�for�� �ణ �򰥸���.. ��� ����
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