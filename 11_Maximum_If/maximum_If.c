#include <stdio.h>

/* ����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�.
   ������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ� scanf_s() �Լ��� �� ���� �� ���� �Է¹ް�
   ���������� �ִ��� ��� �����ϴ� ������ �ۼ�. (9_�� �����̹� ���)
   �ݵ�� if���� ����� ��*/

// main �Լ������� ������ return 0; (��������) ����
// �ٸ� �Լ��� ȣ���ߴٸ� ȣ���� �Լ����� ������� ���Ϲ޾ƿ��°�����

int main(void) {

	int input = 0, max = 0;
	
	scanf_s("%d", &input);
	max = input;

	scanf_s("%d", &input);
	if (input > max) {
		max = input;
	}

	scanf_s("%d", &input);
	if (input > max) {
		max = input;
	}

	printf("%d\n", max);

	return 0;
}