#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 가변 인수란?
/*
// 인수의 개수와 타입이 미리 정해져 있지 않은 인수입니다.

// 가변 인수를 만들기 위해 자료형을 선언해 주어야 합니다.

void Function(int x, ...)
{
	va_list pointer; // 가변인수의 목록 포인터

	__crt_va_start(pointer, x);	// 가변 인수의 목록 포인터 생성


	// 가변 인수(x)의 갯수만큼 반복하도록 설정합니다.
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int 크기 만큼 가변 인수 목록 포인터에서 값을 가져옵니다.

		// pointer는 int 크기만큼 순방향으로 이동합니다.
		printf("%d\n", value);
	}
	
	__crt_va_end(pointer); // 가변 인수 목록 포인터를 NULL로 초기화합니다.

}
*/

// 좌표정보 X와 Y값을 받는 함수입니다.
void gotoXY(int x, int y)
{
	COORD position = { x,y }; // x와 y 좌표값을 설정합니다.
	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

int main()
{
	// 가변 인수
	/*
	// Function이라는 함수는 하나의 매개변수를 가지고 있기 때문에 하나의 인수만 전달할 수 있습니다.
	//Function(3,20,30,40);

	// x 매개 변수의 시작 주소가 저장됩니다.
	// 가변 인수는 연속적인 메모리 공간을 가집니다.
	// x + 1 (20)의 주소가 됩니다.
	// x + 2 (30)의 주소가 됩니다.
	// x + 3 (40)의 주소가 됩니다.

	//printf("%d,%d,%d,%d",10,20,30,40 );
	*/

	// 물체 이동

	// 좌표를 설정합니다.
	int x = 5, y = 5;


	// 키 입력은 매 프레임마다 입력이 되어야 합니다.
	while (1)
	{
		// 키입력
		// 논블로킹
		// 키 입력을 하지 않아도 다른 작업이 실행 될 수 있습니다.

		// (VK_ DOWN) : 키보드 ↓키를 눌렀을때 실행되는 함수
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
			Sleep(10); // 0.1초 동안 대기
						// Sleep : 1/1000의 단위로 계산합니다.
		}

		// 좌표(5,5)를 설정합니다.
		gotoXY(x, y);

		// 좌표 정보를 받아서 출력할 텍스트를 나타냅니다.
		printf("♤");

		// system(cls) : 화면 전체를 지우는 함수입니다.
		system("cls");
		// 동기 vs 비동기

		// 블로킹
		// 키 입력을 받을 때까지 계속 대기하고 다른 작업이 실행되지 않습니다.
	}

	return 0;
}