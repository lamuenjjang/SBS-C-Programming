#include "Monster.h"

// Monster class 구현부
void Monster::Attack(int power)
{
	// 우리는 Monster에 있는 power에 매개변수로 받은 값을 넣고 싶어요.
	this->power = power;
	std::cout << this << "이 객체가" << this->power << "만큼 공격하였습니다." << std::endl;
}
