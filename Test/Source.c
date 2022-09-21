#include <stdio.h> 
int main(void)
{
}



/*/#include <stdio.h>

// 열거형이란?

// 반드시 하나의 값만 가지게 될 변수들의 집합체입니다.

// Day라는 열거형이	생성됩니다.
// 열거형은 상수값으로 정의할 수 없습니다.

enum State
{
	// 열거형 초기값을 명시하지 않으면
	// 가장 처음에 있는 열거형 멤버 변수는 0 이라는 값으로 초기화 됩니다.
	Idle, // <- 가장 먼저 선언한 열거형 변수가 첫번째 변수입니다.
	Jump, // 열거형에 값을 변경할 수 있지만, 그 뒤에 있는 열거형 멤버 변수들의 값도 함께 바뀝니다.
	Attack,
	Death
};
int main()
{
	
	enum State state;

	state = Idle;

	switch (state)
	{
	case Idle: printf("대기 상태");
		break;
	case Attack: printf("공격 상태");
		break;
	case Jump: printf("점프 상태");
		break;
	case Death: printf("죽음 상태");
		break;
	}
	return 0;
}*/