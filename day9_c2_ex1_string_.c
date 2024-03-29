#include <stdio.h>

int main_1(void) {
	// 문자열 : 연속된 문자들의 집합을 나타내는 데이터타입
	// -> 문자의 나열을 뜻함

	//c언어에서의 문자열의 특징

	/*
		1. c언어에서 문자열은 문자배열, 또는 포인터로 표현을 할 수 있음
		2. 큰 따옴표(")를 써서 값을 표현
		3. 문자열은 '\0'(Null)문자가 문자열의 맨킅에 있음
	
	*/

	char greet1[] = "hello!";//여섯글자이지만 Null이 더 있어서 실제로 가진 크기는 7바이트
	//->맨끝에 널 '\0'문자가 포함되어있기 때문이다

	//포인터 기반 문자열 선언
	char* greed2 = "hello";//문자열을 특별취급, 그대로 받아들임
	
	char good1[] = "good";//good1[0]='g';,...
	char* bad1 = "bad";//하나의 주소를 만들고 배열처럼 값을 집어넣음

	printf("%s %s \n", good1, bad1);//실행결과 : good bad

	good1[0] = "h";//됨 -> 요소 하나하나 바꾸는 것이기 때문
	//good1 = "new good"; 안됨

	//bad1[0] = 's';//안됨//배열처럼 쓰면 안됨
	bad1 = "new bad";//됨 -> 다른 주소로 바꿔주기때문에 통째로 넣을수있음















	return 0;
}