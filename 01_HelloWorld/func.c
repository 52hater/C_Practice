#include <stdio.h> // 소스가 분리되면 헤더파일도 각자 인클루드 해줘야함.
// stdio.h > 헤더파일 > 선언들 모여있는
// func.c에 Add 함수원형선언 해놨으니 확인해봐.

int Add(int a, int b) {
	return a + b;
}