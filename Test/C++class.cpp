#include <iostream>
using namespace std;

// �Լ��� �������̵��̶�?
/*
// �̹� ���ǵ� �Լ��� �����ϰ�, ���� �̸��� �Լ��� ���Ӱ� �����ϴ� ����Դϴ�.


class Parent {
public:
	virtual void Talk()
	{
		cout << "Parent Ŭ���� Talk �Լ�" << endl;
	}

	void Information()
	{
		cout << "Parent Ŭ�����Դϴ�." << endl;
	}
};

class Child : public Parent
{
public:
	// �������̵� �� �� ���� Ŭ������ �Լ� �̸��� �����ϰ� ����� �־�� �մϴ�.
	void Information()
	{
		cout << "Child Ŭ�����Դϴ�." << endl;
	}
	void Talk()
	{
		cout << "Child Ŭ���� Talk �Լ�" << endl;
	}
};
*/

// ��� ������ �� �����ڿ� �Ҹ��� ȣ�� ����
/*
class Fruit
{
public :
	Fruit()
	{
		cout << "Fruit Ŭ���� ����" << endl;
	}

	~Fruit()
	{
		cout << "Fruit Ŭ���� �Ҹ�" << endl;
	}
};

class Apple : public Fruit
{
public:
	Apple()
	{
		cout << "Apple Ŭ���� ����" << endl;
	}
	~Apple()
	{
		cout << "Apple Ŭ���� �Ҹ�" << endl;
	}
};
*/

// ���� �����Լ�
// ���� �ְ� ������ ���� �����Լ��Դϴ�.
class Pen
{
public:
	// ���� �����Լ��� �Լ��� 0�� �־��ָ� �˴ϴ�.
	// ���� Ŭ�������� ������ �� ������ ����Ǵ� �Լ��� ����
	// �̸� ȣ�� ��ȹ�� ���� �α� ���� �����մϴ�.

	virtual void Draw() = 0;
	virtual void Color() = 0;
};

class Circle : public Pen
{
public:
	// ���� �����Լ��� ������ ���� Ŭ��������
	// �����Ǹ� �ؾ��մϴ�.
	void Draw()
	{
		cout << "���׶��" << endl;
	}
	void Color()
	{
		cout << "������" << endl;
	}
};
class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "�׸�" << endl;
	}
	void Color()
	{
		cout << "�Ķ���" << endl;
	}
};
int main()
{
	// ���� �Լ� ���̺�
	/*
	Parent * parent = new Parent;

	Child * child = new Child;

	parent->Talk(); // �����Լ� 
	parent->Information(); // �Ϲ��Լ�

	parent = child;
	// parent �������� ������ child�� �޸� ������ ����Ű���� ������.

	// ���� �Լ� ���̺��̶�?
	// �Լ� ������ �迭�̸�, �� �����͸� ���󰡼� �����Լ���
	// ����� ��� �Լ����� �ּҿ� �迭 ���·� �����Ͽ� ȣ���ϴ� ���̺��Դϴ�.

	// �����Լ����̺��� ���� ȣ��Ǿ�� �� �Լ��� ��ġ�� �����ϰ� �ֽ��ϴ�.

	parent->Talk(); // �����Լ�
	parent->Information(); // �Ϲ��Լ�
	*/
	
	// ��� ������ �� �����ڿ� �Ҹ��� ȣ�� ����
	/*
	Apple apple;

	// ��Ӱ��迡�� ���� Ŭ������ ����Ŭ������ �����ڸ� ���� ȣ���� ��, �� ������ ����Ŭ������ �����ڸ� ȣ���մϴ�.
	// �Ҹ��ڴ� �������� �������� ȣ���մϴ�.
	*/

	// �߻� Ŭ����
	// �Ϻ� �Լ��� �������� �ʰ�, ���� �Ǿ��ִ� Ŭ�����Դϴ�.
	// �߻� Ŭ������ ��ü�� ������ �� �����ϴ�.

	// ��� ���� Ŭ���������� ���� �����Լ����� ��� ������ �ؾ߸� ������ �� �ֽ��ϴ�.

	// �ʿ��� ��� Ŭ������ ������ �� �ֵ��� �Ͽ� �������� ���̴µ� ūȿ���� �ݴϴ�,
	Circle circle;
	circle.Draw();

	Rectangle rectangle;
	rectangle.Draw();
	return 0;
}
