#include <stdio.h>

/* 버스 기본 요금을 1000원으로 가정하고 20세 미만인 경우에는 요금을 25% 할인하고
   20세 이상 성인은 할인하지 않음.
   단, 나이가 20을 넘는 경우 20으로 강제 조정해 출력할 것.*/

// 나이를 입력하면 나이는 몇 세, 최종요금은 몇 원
int main(void) {

	// 버스 기본요금은 1000원으로 초기화
	int age = 0, fare = 1000;

	scanf_s("%d", &age);
	if (age < 20) {
		fare -= fare * 25 / 100;
	}
	else {
		age = 20;
	}

	printf("나이 : %d\n"
		"요금 : %d\n", age, fare);

	// const double DISCOUNT_RATE = 0.25;  // 25% 할인율
	// fare = fare * (1 - DISCOUNT_RATE);
	// 이렇게 사용하면 더욱 더 바람직 하겠지

	return 0;
}