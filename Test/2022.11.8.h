/*
#include <iostream>
using namespace std;

// const �Լ�

// const �Լ� ���ο��� ������ ���� ������ �� ������ �����ϴ� �Լ��Դϴ�.

class Characther {
private:
	int health;
	string name;
public:
	void Setinfo(int m_health, string m_name) {
		health = m_health;
		name = m_name;
	}
	void GetInfo() const
	{
		// const �Լ��� ������ �Լ����� ��������� ���� �б���������
		// �����ϱ� ���ؼ� ���Ǵ� ����Դϴ�.
		// health = 100;
		cout << "health�� �� : " << health << endl;
		cout << "name�� �� : " << name << endl;
	}
};


// final

// �� �̻� Ŭ������ �����Լ��� ��ӹ��� �ʰ� �������� �� ������
// �������ִ� Ű�����Դϴ�.
class A
{
public :
	void FunctionA()
	{
		cout << "A�� �Լ��Դϴ�." << endl;
	}
	virtual void FunctionB1()
	{
		cout << "AŬ�������� ȣ���� B1�Լ��Դϴ�." << endl;
	}
};
// Ŭ������ final�� �����ϰ� �Ǹ� BŬ���� �ؿ� �ڽ�Ŭ������
// ������ �� �����ϴ�.
class B : public A
{
public:
	virtual	void FunctionB()
	{
		cout << "B�� �Լ��Դϴ�" << endl;
	}
	void FunctionB1() final
	{
		cout << "BŬ�������� ȣ���� B1�� �Լ��Դϴ�." << endl;
	}
};
class C : public B
{
	void FunctionB()
	{
		cout << "CŬ�������� ȣ���� B�� �Լ��Դϴ�." << endl;
	}

	// FunctionB1�Լ��� BŬ�������� final�� �����߱� ������
	// �ڽ�Ŭ���� C���� �������� �� �����ϴ�.
	// void FunctionB1(){}

};


// ����� ����������

// ��� private, protected, public
// private : �ܺο��� ���� ���ϵ��� �����ϴ� �������Դϴ�.
// protected : Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ����ϴ� �������Դϴ�.
// public : �ܺο����� ������ ����ϴ� �������Դϴ�.

class CPU
{
public:
	void Count()
	{
		cout << "CPU count" << endl;
	}
};

// ����� �Ҷ� ���� �����ڸ� ��������� ��������������
// �⺻ ���� ������(private)�� ����˴ϴ�.

// ��ӿ��� private ���� �����ڷ� ����ϰ� �Ǹ�
// �θ� Ŭ������ ����� �ڽ� Ŭ�������� ȣ���� �� �����ϴ�.
class ALU : public CPU
{

};


// is ~ a ����
// is~a ����� �Ϲ����� ����� ��ü���� ������� �����Դϴ�.

// has ~ a ����
// ���� ���踦 �ǹ��ϸ� �ѿ�����Ʈ(������ ��ü, �Ǵ� �κ�/��� ��ü��� �θ��ϴ�.)
// �� �ٸ� ������Ʈ(composite type�̶�� �θ��ϴ�)�� "���Ѵ�(beloong to)��" ���մϴ�.





int main()
{
	// const �Լ�
	 
	Characther character;

	character.Setinfo(99, "Į����Ÿ");
	character.GetInfo();
	

	// final
	
	C cClass;

	// ��ӿ��� ���� ������
	
	ALU alu;
	alu.Count();
	
	return 0;
}
*/