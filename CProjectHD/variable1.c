#include <stdio.h>

int main2() {
	// 변수(프로그래밍) : 저장공간 (데이터값을 저장 할 수 있는 공간)
	// 자주 바뀔 것 같은, 자주 사용 될 것 같은 값은 미리 저장해놓자
	// 그리고 수정이 필요하면 저장 해 놓은 곳만 바꿈

	char str[] = "2023-02-18"; //일괄 수정(여기선 날짜)시 여기를 바꾸면 됨
	printf("오늘은 %s입니다.\n", str);
	printf("어제는 %s입니다.\n", str);
	printf("내일은 %s입니다.", str);

	return 0;
}