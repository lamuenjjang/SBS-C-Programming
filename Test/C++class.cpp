#include <iostream>
#include <string>
using namespace std;

// �̸� ����(namespace)�̶�?
/*
// �Ӽ��� ������ �� �ֵ��� ��ȿ������ �����ϴ� �����Դϴ�.

namespace ClientA 
{
	void Attack()
	{
		cout << "���Ÿ� ����" << endl;
	}
}

// ClientA�� �̸� ������ ��������ʾƵ� ����ϰڴٴ� �ǹ��Դϴ�.
using namespace ClientA;

namespace ClientB
{

	void Attack()
	{
		cout << "�ٰŸ� ����" << endl;
	}
}

int value = 20;
*/

// �⺻ �Ű�����
/*
// �Լ��� �����Ҷ� �Ű������� ����� ���ÿ� �ʱ�ȭ�ϴ� �Ű������Դϴ�.
void Function(int x = 20, int y = 30) 
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}*/	

int main() 
{
	// ���� ���� �����ڶ�?
	/*
	// ���� �������� �ĺ��Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.
	int value = 10; // ���� ���� value
					// ���� ����
	*/

	// ��ǻ�� ��� �̷� (���� ��Ģ)
	/*
	// ���� ������ ���� �̸��� ���������� ����Ǿ�����,
	// ���� ����� ������ �����ϴ� ������ �̸��� ����ϴ� ��Ģ�Դϴ�.

	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "���� ���� value�� �� : " << ::value << std::endl;

	Attack(); // using namespace�� ����ϱ� ������
			  // ClientA::
			
	ClientB::Attack();
	*/

	// �⺻ �Ű�����
	/*
	// �⺻ �Ű������� �����ϰ� �Ǹ�, �Լ��� �μ��� �������� �ʾƵ� ����� �� �ֽ��ϴ�.

	// �Լ��� �μ��� �����Ҷ� �Ű������� ���ʺ��� ���� ���ϴ�.
	Function();
	*/

	

	// getline() �Լ� : ǥ���Է��� �޴°�� Enter�� ���ο� ���� �Է¹��� ���ڿ��� �����մϴ�.
	/*
	string name;
	getline(cin, name);

	cout << name;*/

	int num;
	string str;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int sum = 0;
		cin >> str;
		int Ocnt = 1;
		for (int j = 0; str[j] != '\0'; j++) {
			if (str[j] == 'O') {
				sum += Ocnt;
				Ocnt++;
			}
			else if (str[j] == 'X') {
				Ocnt = 1;
			}
		}
		cout << sum << endl;
	}

	

	return 0;
	
}