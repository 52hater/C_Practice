#include <stdio.h>

/* for ���� ����� int[5] �迭�� ����� ������ ������������ �����ϴ� ���α׷��� �ۼ�.
���� ����� �������� (�ּ� or �ִ밪 ���ϱ��� �ݺ�) �˰����� ���*/

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };

	// �ܺ�for���� ����Ŭ�� �ݺ��ϴ°Ű�
	// ����for���� �ѻ���Ŭ ���� ��
	// i�� idx 0, j�� idx 1�� �ʱ�ȭ �Ǿ�����

	// i < 4 �� �ϴ� ���� : ���ؿ�Ұ� 4���� �� �ʿ䰡 ����.
	// ���ؿ���� ����(���ϴ� ����)�� �ε��� 3�������̴ϱ�
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