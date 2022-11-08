#include <iostream>

using namespace std;

// ������Ƽ
/*
class Game
{
// class ������ �Ӽ�
// private���� �������ּž� �մϴ�.
// class�� ������ �ܺηκ��� �������� �ʰ� Ư���� �������̽���
// �����ؼ� ����ڰ� ���� ���� �ǵ帮�� �ʰ� ����ϴ� ������� �����ؾ� �մϴ�.
private :
	int stage;
	int gameMoney;
public :
	// setter() �Լ� : ��� ������ ���� ������ ��
	void SetStage(int stage)
	{
		if (stage >= 10)
		{
			stage = 10;
		}

		this->stage = stage;
	}
	// getter() �Լ� : ��� ������ ���� ��ȯ�� ��
	int GetStage()
	{
		return stage;
	}
};
*/

// ���� ������
/*
// �ڽŰ� ���� Ŭ���� Ÿ���� �ٸ� ��ü�� ���� ������ �μ��� ���޹޾�
// �� ������ ������ �ڽ��� �ʱ�ȭ�ϴ� �������Դϴ�.
class Fruit
{
private:
	int sugarContent;
	string color;
	string shape;
public:
	Fruit(int m_sugar, string m_color, string m_shape)
	{
		sugarContent = m_sugar;
		color = m_color;
		shape = m_shape;
	}

	// ���� �����ڿ� �μ��� &(���۷���)�� �޴� ����
	// ���ο� ��ü�� ������ �� ����� ������� ������
	// �����ϱ� ���� �����մϴ�.

	// const ����� �����͸� ��ȣ�ϱ� ���� ���ȭ�� �մϴ�.
	Fruit(const Fruit & fruit)
	{
		cout << "���� ������ ȣ��" << endl;

		sugarContent = fruit.sugarContent;
		color = fruit.color;
		shape = fruit.shape;
	}

	void Information()
	{
		cout << sugarContent << endl;
		cout << color << endl;
		cout << shape << endl;
	}
};
*/

// ���� ����
/*
// ��ü�� ���� ���� �ƴ϶� ������(�ּҰ�)�� �����ϴ� ���� �����Դϴ�.
class School
{
private :
	int * student;

public :
	School(int value)
	{
		student = new int(value);
		cout << "�л��� �� : " << * student << endl;
	}

	School(const School & school)
	{
		student = new int(*school.student);
	}

	// �Ҹ���
	~School()
	{
		delete student;
	}
};
*/

// friend
/*
// ���� �ٸ� Ŭ������ private ������ ������ �� �ֵ��� �����ϴ� ����Դϴ�.
class A
{
private :
	string name;
	string skill;

	// friend�� ���� �����ڿ� ������� �ƹ��볪 ����� �� �ֽ��ϴ�.
	friend class B;

	friend void Attack(A & a, string m_skill);
};

class B
{
public :
	void SetFriendName(A & a, string m_name)
	{
		a.name = m_name;
	}

	void GetFriendName(A & a)
	{
		cout << a.name << endl;
	}
};
*/

// �������̵�
// ���� Ŭ������ �Լ��� ���� Ŭ������ �������ؼ� ����ϴ� ����Դϴ�.
class Monster
{
public:
	void Attack()
	{
		cout << "����" << endl;
	}
};

class Slime : public Monster
{
public:
	void Attack()
	{
		cout << "���� ��ġ��" << endl;
	}
};

class Goblin : public Monster
{
public:
	void Attack()
	{
		cout << "������ ������" << endl;
	}
};

int main()
{
	// ������Ƽ
	/*
	Game CallofDuty;
	CallofDuty.SetStage(15);

	cout << CallofDuty.GetStage() << endl;
	*/

	// ���� ������
	/*
	// �絵 : 5, ���� : Red, ���� : Apple
	Fruit apple1(5,"Red","Apple");
	apple1.Information();

	Fruit apple2 = apple1;
	apple2.Information();
	*/

	// ���� ���� (����)
	/*
	int * ptr1 = new int(10);

	* ptr1 = 30;

	cout << "ptr 1�� �� : " << * ptr1 << endl;

	int * ptr2 = ptr1;

	*ptr2 = 100;

	cout << "ptr 1�� �� : " << *ptr1 << endl;
	cout << "ptr 2�� �� : " << *ptr2 << endl;

	delete ptr2;
	delete ptr1;
	*/

	// ���� ����
	/*
	// �������� �ƴ� �ν��Ͻ��� ���� �����Ͽ� �ڽŸ��� �������� �����ϴ� �����Դϴ�.
	School school1(10);

	School School2 = school1;
	*/

	// friend 
	/*
	A a1;
	B b1;

	Attack(a1, "��ġ��");
	b1.SetFriendName(a1, "�˸���Ÿ");

	b1.GetFriendName(a1);
	*/

	Slime slime;
	slime.Attack();

	Goblin goblin;
	goblin.Attack();

	return 0;
}

/*
void Attack(A& a, string m_skill)
{
	a.skill = m_skill;
	cout << a.skill << endl;
}
*/
