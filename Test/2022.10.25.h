/*
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

// ���� �Ҹ��ڶ�?

// ���� �Ҹ��ڴ� ����������, ���� �����ڴ� �������� �ʽ��ϴ�.

class A
{
public:
	A()
	{
		cout << "A Ŭ���� ����" << endl;
	}
	virtual ~A()
	{
		cout << "A Ŭ���� �Ҹ�" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B Ŭ���� ����" << endl;
	}
	virtual ~B()
	{
		cout << "B Ŭ���� �Ҹ�" << endl;
	}
};


// ������

// Ŭ������ ��� �Լ��� �ƴ�����, Ŭ������ friend ��� �����ϰ� �Ǹ�
// Ŭ������ ��� �Լ� ó�� private����� ������ �� �ִ� ����Դϴ�.

class PeopleA
{
private:
	int age;
	// ģ���� ������ Ŭ������ �̸��� �����մϴ�.

	friend void Information(PeopleA a) // <- ���� �Լ��� ����
	{
		cout << "PeopleA Ŭ���� ����" << endl;
	}


	// friend Ű����� publid, private,protected
	// ��𿡼��� ��밡���մϴ�.
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
	// ���� �Ҹ���
	
	// ���� �Ҹ��ڰ� ȣ��Ǹ� ��� ������ �� �Ʒ��� �ִ� ���� Ŭ������
	// �Ҹ��ڰ� ��� ȣ��Ǹ鼭 ���� Ŭ������ �Ҹ��ڰ� ������� ȣ��˴ϴ�.
	A* aptr = new B();

	delete aptr;
	
	// ������
	
	PeopleA a(10);
	Information(a);
	PeopleB b;
	b.Friendinformation(a);
	
	// ����
	
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
	

	// �ߺ����� �ʴ� ������
	// 1. �迭�� �����մϴ�.
	// 2. �迭�� ���������� ���� �����մϴ�.

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