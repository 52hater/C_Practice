#include <stdio.h>

/* 버스 기본 요금을 1000원으로 가정하고 나이에 따라
   다음과 같이 요금을 할인율 적용
   
   0~3    영유아 100%(무료)
   4~13   어린이 50%
   14~19  청소년 25%
   20이상  성인   0%*/

int main(void) {

	int age = 0, fare = 1000;

	scanf_s("%d", &age);
	if (age >= 20) {
		fare = fare;
	}
	else if (age >= 14) {
		fare -= fare * 25 / 100;
	}
	else if (age >= 4) {
		fare -= fare * 50 / 100;
	}
	else {
		fare -= fare * 100 / 100;
	}

	printf("나이 : %d\n"
		"요금 : %d\n", age, fare);

	return 0;

	// else if 는 조건을 순차적으로 검사하며 이전 조건이 거짓일 때만 다음 조건을 검사하고 참이면 남은 조건은 검사x (학점생각)
	// if if if 이런식으로 쓰는 경우는 각각의 조건이 독립적일 때 ( ex) 학생할인 + 주말할인 + 정회원할인 + 쿠폰할인)
	// if if if 로 쓸 경우 참이든 거짓이든 다음 if로 넘어가지.
	// 위의 예제같은 상호배타적인 조건(한 조건이 참이면 다른 조건은 무조건 거짓)일때는 중복할인이 되면 안되지.

	// 할인율 double rate; 따로 지정해줘서 쓰는 것이 더 바람직 할 듯. 연습해보셈
	// double fare = 1000 * rate; 이런식으로 해서
	// 프린트에는 (int)fare 이런식으로 쓰면 되겠지
}