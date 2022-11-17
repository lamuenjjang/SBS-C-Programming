#include <iostream>
using namespace std;

void Plus(int x,int y) 
{
	cout << x + y << endl;
}


void Effect(int x,int y)
{
	cout << x * y << endl;
}

void Count(int x, int y)
{
	cout << x / y << endl;
}

int main()
{
	// 거품 정렬 (bubble sort)
	/*
	// 서로 인접한 두 원소의 대소를 비교하고, 조건에 맞지
	// 않다면 자리를 교환하는 알고리즘입니다.
	
	// 거품	정렬의 시간 복잡도
	// O(n^2) 
	
	// 거품 정렬의 공간 복잡도
	// O(n)

	int arr[5] = { 2,5,4,3,1 };
	printf("변경 전\n");
	for (int a = 0; a < 5; a++) {
		printf("%d\n",arr[a]);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("변경 후\n");
	for (int a = 0; a < 5; a++) {
		printf("%d\n", arr[a]);
	}
	*/

	// 연산자 우선순위
	/*
	// 수학 및 컴퓨터 프로그래밍에서 연산의 우선순위는
	// 모호하게 해석가능한 수식에서 어느 연산을
	// 먼저 계산할 것인지 결정하는 규칙입니다.

	char charArray[6] = { "Korea" };
	char* charPtr = charArray;

	cout << (char) ( * charPtr + 1) << endl;

	// 1 순위
	// 변수++, 변수-- 후위 증감 연산자
	// () : 함수 호출 연산자
	// [] : 배열 첨자
	// .  : 멤버 연산자
	// -> : 멤버 포인터 연산자
	
	// 2 순위
	// ++변수, --변수 전위 증감 연산자
	// +,- : 단항 연산자
	// ! : 논리 연산자
	// ~ : 비트 연산자
	// *포인터변수 : 역참조 연산자
	// &변수 : 변수의 주소

	// 3 순위
	// * : 곱셈
	// / : 나눗셈
	// % : 나머지

	// 4 순위
	// + : 덧셈
	// - : 뺄셈
	
	// 5 순위
	// <<, >> : 쉬프트 연산자
	// <,<=,>=,> : 비교 연산자
	*/

	// 함수 포인터 배열
	void (*funcPtr[3])(int, int);

	funcPtr[0] = Plus;
	funcPtr[1] = Effect;
	funcPtr[2] = Count;

	for (int i = 0; i < 3; i++) {
		funcPtr[i](10, 20);
	}
	return 0;
}