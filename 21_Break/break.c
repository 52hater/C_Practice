#include <stdio.h>

int main(void) {
	char ch = 0;

	// while (1)이면 참이니까 무한루프인데 브레이크로 탈출
	// while(ch != 'x') > x가 아닐 동안 반복
	// while(1) 무조건 반복 (참이라서 무조건 계속 실행됨) > "일단 계속 돌아!"라는 의미 (break로 빠져나오도록 유도해야지)
	// while(0)            (거짓이라서 한번도 실행 안됨.)
	// getchar(); 에다가 asdfasdfasdfasdfasdfx 치면 asdfasdfasdfasdf까지 루프돌다가 x만나서 나옴
	// 중요한건 여기서 x는 출력안함 (break 이후의 구문은 실행시키지 않고 아예 바로 스코프를 빠져나옴)
	// 그래서 putchar(ch); 에서 x를 출력하지않음. break 이후에 있는 구문이니까.
	
	// 반복문이 중첩됐을 경우 내부 반복문에서 break문이 수행되면 내부 반복만 멈추고 외부 반복문은 계속 수행

	// continue는 break와 마찬가지로 continue 이후의 코드를 수행하지않고 다시 조건검사하러 감(계속 반복하겠다는 것)
	// continue는 꼭 써야할때만 쓰고 웬만하면 쓰지마 논리적으로 복잡해짐 로직이.
	// aaaqbbb 치면 aaabbb 출력하고 다시 입력으로 가지(계속 반복).
	while (1) {
		ch = getchar();
		if (ch == 'x')
			break;

		if (ch == 'q')
			continue;

		putchar(ch);
	}

	return 0;
}