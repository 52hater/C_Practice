/*  �����Ϳ� 1���� �迭
	- �迭�� �̷�� ��� ���Ŀ� ���� ������ ������ �����ϴ� ���� �Ϲ���
	- char []�� char* �� ����
	- int []�� int* �� ����
	- ���� ���� ����(*)�� ����� ������ �ִ� ������ ������ �� ����

	���� �����ϰ� �Ǿ��� �������κ��� �� ĭ �������ִ���? > �ε���(���ذ��� ����� ��ġ)
	� �迭������ ù��°��� �� ���ؿ�Ұ� �Ǵ°��� ��ġ������ �ּҰ� �ְ�
	�ּҴ� ����� �ּһ���� �ĺ��ڰ� �ο��ȴ�.
	
	�迭 > ����ڷ��� ����
	char szData[5] = {"data"}; �̷��� ���� �� ���Ǹ� �ߴٰ� �����ϸ�
	�� �� szData��� �ϴ� �ĺ����� �ڷ����� char [5] ĳ���Ͱ� 5���ִ� �迭����
	�̰��� �����͸� �����ϸ� 1����� �ϳ� char* > ĳ���͸� ����ų �� �ִ� ������, �� ĳ���Ϳ� ���� �����Ͱ� �Ǵ� ��.
	�̷��� �迭�� �̸��� �ĺ��ڷ� �����Ϸ��� ĳ���� ������ ������ �����ؼ� �����ϸ� ��.
	�� ���� ���� �Ϻ��ϰ� ȣȯ�� �� > 1���� �迭, ������ >>> ��� �̰����� �� �� �˾ƾ���.
	**cf) �����Ϳ� �迭�� �Ѱ��� �߿��� ������ :
	- �迭���� ��� �����ͷ� ���� ������ �� ������(aList = &someVar; �Ұ���)
	- ������ ������ �ٸ� �ּҸ� ����Ű���� ������ ������(pnData = &someVar; ����)

	������������(*)
	char* pszData = �ּ�; > pszData��� �����ͺ����� * �ٿ��� *pszData > �̶� �갡 �ٷ� �������������� ��.
	�������� > ������ �ִµ� �� ������ ����Ű�� ���� ��� �ڷ������� �ؼ��ϱ�� �߾� (��������)
	1�����迭�� ���� ������ �̱��������ΰ�� LValue�� �����ͷ� ��������
	>> *(char*) >> ** ���ְ� char ���� > ĳ�������� ��
	>> *pszData > ĳ���� ������ �� (�������� �ع����� ����) > *pszData = 'A'; �̷� �� �ִ°���
	
	�����Ϳ� 1���� �迭
	- ������ ������ �迭 �̸��� ���� ����, ���� ������ �� �� ���� (��, ������ �ȵ�)
	- �� ����, ������ ��� ������ �ƴ϶� ��� ��ġ�� ����ϱ� ���� �����̸� �迭����� ������ �ǹ� (����+3 > ��ġ�� Ư��)
	>> � ������ ������ ���������� �ΰ� �ű⿡ ���ؼ� ��� ��ġ�� ����ϴ� ���� (���� ����, ��쿡 ���� �������� ���� ��)
	- ������ ������ ���ؼ��� ���� ��/�� ���굵 ����

	+1�� �Ѵ�ġ�� �̰� �� ���� �ؼ��ض�
	������� ĳ���͹迭�̸� �� �� > ��ĭ ���� > �ּҰ� 1����Ʈ��ŭ ���� (ĳ���� �Ѱ���ŭ)
	��Ʈ�迭�̸�? > 4����Ʈ��ŭ �����ϰ��� (�����Ѱ���ŭ)
	��Ʈ�迭�̸�? > 2����Ʈ��ŭ �����ϰ��� (��Ʈ�Ѱ���ŭ)
*/

#include <stdio.h>

int main(void) {

	int aList[5] = { 0 };
	// �迭�� ������ó�� ù����� �ּҸ� ����Ų���ݾ�. ********�迭�̸��� ��ü�� ù��° ����� �ּҸ� �ǹ���!!!!********
	int* pnData = aList; // �����Ϳ� aList��� ���� > aList��°� ��ü�� ���ؿ���� �ּҴϱ� �Ʒ��ٰ� ����. �� ǥ���� �� ���� ��
	//int *pnData = &aList[0];
	// ���� �� �� �� �迭�� ù ��° ����� �ּҸ� ����Ŵ, pnData�� int �ϳ�(4����Ʈ)�� �̵��� �� �ִ� �����Ͱ� ��.
	// 
	// ****************�ٵ� int* pnData = &aList; �� �ٸ�. ***************
	// &aList�� "�迭 ��ü"�� �ּҸ� �ǹ��ϸ�, Ÿ���� int(*pArr)[5]�� ��.(5���� int�� ������ �迭�� ���� ������)
	// ���� int* pnData = &aList;�� Ÿ�� ����ġ�� ������ ������ �߻���.

	// �����Ϳ��꿡���� int �϶� pa+1 > 4����Ʈ��ŭ �̵� / pArr+1 > 20����Ʈ��ŭ �̵�(int(*pArr)[5]���)
	// ���⼭(*pArr)[5]�� ��ȣ�� �ʼ���.��ȣ�� ������ int* pArr[5]�� �Ǿ�����µ�,
	// �̴� "int ������ 5���� ������ �迭"�̶�� ���� �ٸ� �ǹ̰� ��
	// int(*pArr)[5] > �迭�� ����Ű�� ������
	// int pArr[5] > int������ 5���� ������ �迭

	// �迭�����͸� ���� �ֵ� ���� > 2�����迭�� �Լ��� �Ű������� �����Ҷ�, ���� ���� ������ ũ���� �迭�� �ٷ� ��
	// 2���� �迭�� �Լ��� �Ű������� ���� �޴� ����
	/* void printArray(int (*arr)[3], int rows) {  // 3��¥�� 2���� �迭�� �޴� �Լ�
			for(int i = 0; i < rows; i++) {
				for(int j = 0; j < 3; j++) {
					printf("%d ", arr[i][j]);
				}
					 printf("\n");
			}
		}

	int main() {
		int arr[2][3] = {{1,2,3}, {4,5,6}};
		printArray(arr, 2);
		return 0;
	} */

	printf("aList[0] : %d\n", aList[0]);

	*pnData = 20;
	printf("aList[0] : %d\n", aList[0]); //�̱۷�����̿�
	printf("pnData[0] : %d\n", pnData[0]); //�̱������ʹ� ������ ȣȯ�� �ȴ�.
	// ���������ϸ��� *pnData�� ������ int�� ���� ������ int*�̴ϱ� int ������ �Ǵ� ��.
	// �׷��� �� �����͸� ���󰡼� �ű⿡ 20�� �����ϰ� �ǰ��� (*pnData = 20;)


	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer; // �� �������� pszData�� 'H'�� ����� �޸� ��ġ�� ����Ŵ(�迭�� ù��° ����ּҷ� �ʱ�ȭ)

	// ���ǹ��� ������ �� �� ���� �ݺ�
	while (*pszData != '\0') // ���������� ����� ���� > ÷�� ����� �� h���� (������>���� ������) / �ι��� ���������� �ݺ�
		pszData++; // �ּҰ� + 1 > H > e > l > l > o > \0 (char�� ���� �����ʹϱ� char�Ѱ���ŭ +�ΰ���(+1)) / **�̰� �����ϴ°���**
	// �����ּҺ��� 5��ŭ �������� (������ ���� ���� ��ġ(�ι�����ġ))
	// �ٵ� pszData ������ �ּҰ��� �����Ѵٴ� �ڵ尡 �ϳ��� ���°Ͱ�����
	// >> pszData++�� ������ �����ͺ��� pszData�� ����� �ּҰ��� 1 ������Ű�� ��.
	// ������ �ּҰ� ���� �ڵ尡 ��� ++�����ڰ� pszData�� �ּҰ��� ���� �����ϴ� ��.
	// �̰��� �������� ���� �� �ϳ��� - �ּҰ��� ���� ����
	// �������϶� ++�� �ڷ����� ũ�⸸ŭ ����
	// ��·�ų� �� ������ ������ ���������� pszData�� \0�� �ּҰ��� �Ǿ��ְ���

	/*  int num = 5;
		while(num < 8) {
			printf("%d ", num);  // 5 6 7 ���
			num++;             
		} >> ������ �� �������� num = 8 �ΰ�ó��
	*/

	printf("&pszData : %p, &szBuffer : %\n",
		pszData, szBuffer);
	// pszData : ������ ���� ���� ��ġ(�ι�����ġ)
	// szBuffer : �迭�� ������ġ
	// �� �ּ� ���� 16���� ���·� ���

	printf("Length : %d\n", pszData - szBuffer); // 5�� �������� > ���ڿ��� ���̰� �Ǵ°�����.("Hello"�� ����)
	// pszData - szBuffer >> �� �������� ���̸� ���
	// ������ġ���� ������ġ������ �Ÿ� = ���ڿ� ����
	// �������Ƽ� ���� ���ö����� ��� ������� ���ڿ��� ���̸� ���.
	// >> ������ Cǥ�� ���̺귯���� strlen()�Լ��� �����ϴ� ��İ� ������.

	return 0;
}