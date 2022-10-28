/*
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

// 가상 소멸자란?

// 가상 소멸자는 존재하지만, 가상 생성자는 존재하지 않습니다.

class A
{
public:
	A()
	{
		cout << "A 클래스 생성" << endl;
	}
	virtual ~A()
	{
		cout << "A 클래스 소멸" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B 클래스 생성" << endl;
	}
	virtual ~B()
	{
		cout << "B 클래스 소멸" << endl;
	}
};


// 프렌드

// 클래스의 멤버 함수는 아니지만, 클래스의 friend 라고 선언하게 되면
// 클래스의 멤버 함수 처럼 private멤버에 접근할 수 있는 기능입니다.

class PeopleA
{
private:
	int age;
	// 친구로 선언할 클래스의 이름을 선언합니다.

	friend void Information(PeopleA a) // <- 전역 함수로 선언
	{
		cout << "PeopleA 클래스 정보" << endl;
	}


	// friend 키워드는 publid, private,protected
	// 어디에서든 사용가능합니다.
	friend class PeopleB;
public:
	PeopleA(int age)
	{
		this->age = age;
	}
};

class PeopleB
{
public:
	void Friendinformation(PeopleA people)
	{
		cout << people.age << endl;
	}
};

int main()
{
	// 가상 소멸자
	
	// 가상 소멸자가 호출되면 상속 구조의 맨 아래에 있는 하위 클래스의
	// 소멸자가 대신 호출되면서 상위 클래스의 소멸자가 순서대로 호출됩니다.
	A* aptr = new B();

	delete aptr;
	
	// 프렌드
	
	PeopleA a(10);
	Information(a);
	PeopleB b;
	b.Friendinformation(a);
	
	// 곱셈
	
	int a,b,sum=0;
	int res[3];
	cin >> a;
	cin >> b;

	for (int i = 0; i < 3; i++) {
		int temp = b % 10;
		res[i] = a * temp;
		cout << res[i] << endl;
		b /= 10;
	}
	for (int j = 2; j >= 0; j--) {
		sum = sum * 10 + res[j];
	}
	cout << sum << endl;
	

	// 중복되지 않는 랜덤값
	// 1. 배열을 생성합니다.
	// 2. 배열에 순차적으로 값을 지정합니다.

	int randomvalue[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i = 0, in_array = 0;
	srand(time(0));
	while (1)
	{
		in_array = 0;
		int temp = rand() % 10 + 1;
		for (int j = 0; j < 10; j++)
		{
			if (randomvalue[j] == temp)
			{
				in_array += 1;
			}
		}
		if (in_array == 0)
		{
			randomvalue[i] = temp;
			i++;
		}
		if (randomvalue[9] != 0)
			break;
	}
	for (int k = 0; k < 10; k++)
	{
		cout << randomvalue[k] << endl;
	}
	return 0;
}*/