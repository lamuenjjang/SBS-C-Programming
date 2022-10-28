/*
#include <iostream>
using namespace std;

// 다중상속이란?

// 아떤클래스가 하나 이상의 상위 클래스로부터 여러가지 행동이나 특징을
// 상속 받을 수 있는 상속입니다.

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Keyboard 호출" << endl;
	}
	void Input()
	{
		cout << "키보드 입력" << endl;
	}
	char key;
};

class Mouse
{
public:
	Mouse()
	{
		cout << "Mouse 호출" << endl;
	}
	void Input()
	{
		cout << "마우스 입력" << endl;
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


// 가상 상속

class A
{
public:
	A()
	{
		cout << "A클래스 호출" << endl;
	}
};

class B : virtual public A
{
public:
	B()
	{
		cout << "B클래스 호출" << endl;
	}
};

class C : virtual public A
{
public:
	C()
	{
		cout << "C클래스 호출" << endl;
	}
};

class D : public B, public C
{
public:
	D()
	{
		cout << "D클래스 호출" << endl;
	}
};


int main()
{
	// 다중상속
	
	Computer computer('A', 40);
	// 다중 상속일 때 같은 이름의 함수를 사용하려면 클래스를 명시하고
	// 범위 지정 연산자를 사용해서 함수를 호출해야 합니다.
	computer.Keyboard::Input(); // keyboard 클래스의 input();
	computer.Mouse::Input();
	

	// 다이아몬드 상속
	
	// 하나의 자식 클래스가 상속받는 서로 다른 부모 클래스들이
	// 같은 조부모 클래스를 상속받는 구조입니다.
	D d;
	

	// 나머지
	
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