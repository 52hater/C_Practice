#include <stdio.h>

/* 5�� 5�� �簢���� *�� ���, for�� ��ø���� ����. */

int main(void) {

	// ��ø for���� �ܺη��� �ϳ��ϳ� �Ҷ����� ���η����� �ѻ���Ŭ �� ���� ��.
	// �����ڵ� ������ ��ġ ǥ�� ����ó�� �� �� �ִ� ��.
	// i=0 �϶� ���η��� �� ���� �� ������ i=1�϶� ���η��� �� ���� �׷� ����.
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("* ");
		}
			puts("");
	}

	return 0;
}