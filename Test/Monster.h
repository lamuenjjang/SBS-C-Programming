#pragma once
#include <string>
#include <iostream>

//	Monster Ŭ���� �����
// Ŭ���� cpp�� h�� ���� ���� Ŭ�����Դϴ�.
class Monster
{
public :
	int health;
	std::string name;
	int power;

	// this �����Ͷ�?
	// ��ü �ڽ��� ����Ű�� �������Դϴ�.
	void Attack(int power);
};

