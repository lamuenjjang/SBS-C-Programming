#include <iostream> 
#include <vector>

using namespace std;


// ���ø� (Ŭ������ �Լ�)
// �������� ���Ŀ� �������� �ʰ� �ϳ��� ���� ���� �ٸ� ������
// Ÿ���� ���� �� �ִ� ����Դϴ�.

// �����Ϸ��� �̸� �Լ��� ��Ʋ�� ����� ���� �Լ��� ȣ��� ��
// ���� �Լ��� ȣ���մϴ�.

// �Լ� ���ø��� �����̱� ������ �޸� Ȱ���� ��üȭ�Ǿ� ���� ���� �����Դϴ�.

// �Լ� ���ø�
/*
template <typename T>
void Calculator(T x, T y)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}
*/

// Ŭ���� ���ø�
/*
template <class T>
class Game
{
private :
	T num1;
	T num2;
public:
	Game(T _num1, T _num2)
	{
		num1 = _num1;
		num2 = _num2;
	}

	T Getnumber1()
	{
		return num1;
	}
	T Getnumber2()
	{
		return num2;
	}
};
*/

// ���ø� Ư��ȭ
/*
// ���ø����� �̸� �����س��� Ÿ���� ������ ��,
// ���� ó���ϰ� �ִ� �� ����ϴ� ���ø�
template <typename T>
void Add(T x, T y)
{
	cout << "x�� �� :" << x << endl;
	cout << "y�� �� :" << y << endl;
}

template<> // ���ø��� Ư��ȭ
void Add(int x, int y) // Add() �Լ��� ȣ���� �� int �Ű������� ������ �� �Լ��� ó���ϰڴ�.
{

}
*/


int main()
{
	// �Լ� ���ø�
	/*
	Calculator(10, 20);

	Calculator(10.5f, 6.7f);

	Calculator('A', 'B');
	*/

	// Ŭ���� ���ø�
	/*
	Game<int> game1(10, 20);
	cout << game1.Getnumber1() << endl;
	cout << game1.Getnumber2() << endl;

	Game<float> game2(10.5f, 6.5f);
	cout << game2.Getnumber1() << endl;
	cout << game2.Getnumber2() << endl;
	*/

	// ���ø� Ư��ȭ
	/*
		Add(10.5f,6.5f);
	*/

	// STL (Standard Template Library)
	// ǥ�� ���ø� ���̺귯��
	// �ڷᱸ���� �˰����� Template ���·� �����ϴ� ���̺귯���Դϴ�.

	// STL�� ����
	/*
	// 1. �����̳�
	// �����͸�	�����ϴ� ��ü, �ڷᱸ���� ��Ƶ� �����Դϴ�.
	//   - A : ���� �����̳�
	//         �ڷḦ ���������� �����ϴ� �����̳��Դϴ�.
	//   - B : ���� �����̳�
	//         Ʈ�� ������ �����Ǿ� �ִ� �����̳��Դϴ�.
	//         �˻� �� ���� �׸��� ������ ������.
	//   - C : �����̳� �����
	//         ������ �����̳��� �Ϻ��� ��ɸ� ��� �����ϰ� �Ͽ�,
	//         ����� ���ѵǰų� �����Ǿ� �ִ� �����̳��Դϴ�.
	*/


	// Vector
	// �������� ���Ҹ� �߰��� �� ������, ũ�Ⱑ �ڵ����� �þ�� 
	// �����̳��Դϴ�.
	vector<int> data;

	// vector�� push_back�� �ڿ������� �����͸� �־��ݴϴ�.
	data.push_back(10);
	data.push_back(5);

	// vector�� pop_back�� �ڿ������� �����͸� ���ϴ�.
	data.pop_back();

	// vector�� size�� vector�� ������ �ִ� �����̳��� ũ�⸦ ��ȯ�մϴ�.
	data.size();

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}
	// vector�� front�� �Ǿտ� �ִ� ���Ҹ� ����մϴ�.
	cout << data.front() << endl;

	// vector���� ��쿡�� �Ǿ��� ���Ҹ� �߰��� �� �����ϴ�.


	// list
	// Deque
	return 0;
}