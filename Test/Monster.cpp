#include "Monster.h"

// Monster class ������
void Monster::Attack(int power)
{
	// �츮�� Monster�� �ִ� power�� �Ű������� ���� ���� �ְ� �;��.
	this->power = power;
	std::cout << this << "�� ��ü��" << this->power << "��ŭ �����Ͽ����ϴ�." << std::endl;
}
