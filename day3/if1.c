#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	//삼항연산자
	int num = 3;

	(num < 3) ? printf("3보다 작습니다") : printf("3 이상입니다.");
	// 조건문 if : 조건에 따라서 내 프로그램을 다르게 동작시켜야 할때

	//if(){}
	//()안의 조건이 맞을 때만 {}안의 코드를 실행하는 문법
	if (num < 3) {
		//조건이 맞을떄만 사용가능
		printf("3보다 작습니다.");
	}

	if (num >= 3) {
		//num이 3보다 크거나 같을때 사용될 코드
		printf("3이상입니다.");

	}

	if (num == 3) {

		printf("3과 같습니다.");

	}

	int age = 19;
	//나이가 성일일때만 성인입니다 출력

	if (age >= 20) {
		printf("성인입니다.");
	}



	return 0;
}