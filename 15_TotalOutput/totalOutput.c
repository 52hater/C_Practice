#include <stdio.h>

/* 1~10���� ������ ����ϴ� ���α׷��� �ۼ�.
   while���� for������ ���� �ۼ��ϸ� �ݺ�ȸ���� 10ȸ�� ����.
   �ݵ�� ������ �����ϴ� ������ Ȱ���� ��.*/

int main(void) {

	int i = 0, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	// while���� �ϳ��� ���Ǹ� ��
	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	return 0;
}