/*
#include <iostream>
using namespace std;

// ���߻���̶�?

// �ƶ�Ŭ������ �ϳ� �̻��� ���� Ŭ�����κ��� �������� �ൿ�̳� Ư¡��
// ��� ���� �� �ִ� ����Դϴ�.

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Keyboard ȣ��" << endl;
	}
	void Input()
	{
		cout << "Ű���� �Է�" << endl;
	}
	char key;
};

class Mouse
{
public:
	Mouse()
	{
		cout << "Mouse ȣ��" << endl;
	}
	void Input()
	{
		cout << "���콺 �Է�" << endl;
	}
	int sensor;
};

class Computer : public Keyboard, public Mouse
{
public:
	Computer(char _key, int _sensor)
	{
		Keyboard::key = _key;
		Mouse::sensor = _sensor;
		cout << Keyboard::key << endl;
		cout << Mouse::sensor << endl;
	}
};


// ���� ���

class A
{
public:
	A()
	{
		cout << "AŬ���� ȣ��" << endl;
	}
};

class B : virtual public A
{
public:
	B()
	{
		cout << "BŬ���� ȣ��" << endl;
	}
};

class C : virtual public A
{
public:
	C()
	{
		cout << "CŬ���� ȣ��" << endl;
	}
};

class D : public B, public C
{
public:
	D()
	{
		cout << "DŬ���� ȣ��" << endl;
	}
};


int main()
{
	// ���߻��
	
	Computer computer('A', 40);
	// ���� ����� �� ���� �̸��� �Լ��� ����Ϸ��� Ŭ������ ����ϰ�
	// ���� ���� �����ڸ� ����ؼ� �Լ��� ȣ���ؾ� �մϴ�.
	computer.Keyboard::Input(); // keyboard Ŭ������ input();
	computer.Mouse::Input();
	

	// ���̾Ƹ�� ���
	
	// �ϳ��� �ڽ� Ŭ������ ��ӹ޴� ���� �ٸ� �θ� Ŭ��������
	// ���� ���θ� Ŭ������ ��ӹ޴� �����Դϴ�.
	D d;
	

	// ������
	
	int buffer[255];
	int n[10];
	int in_array=0,cnt =10;

	for (int i = 0; i < 10; i++)
	{
		cin >> buffer[i];

		n[i] = buffer[i] % 42;
	}

	for (int j = 0; j < 10; j++)
	{
		for (int k = j + 1; k < 10; k++)
		{
			if (n[j] == n[k])
			{
				in_array++;
			}

		}
		if (in_array)
		{
			cnt--;
			in_array = 0;
		}
	}

	cout << cnt;
	



	return 0;
}
*/