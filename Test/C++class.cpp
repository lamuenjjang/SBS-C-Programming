#include <iostream>
#include <string>
using namespace std;

// 이름 공간(namespace)이란?
/*
// 속성을 구분할 수 있도록 유효범위를 설정하는 영역입니다.

namespace ClientA 
{
	void Attack()
	{
		cout << "원거리 공격" << endl;
	}
}

// ClientA의 이름 공간을 명시하지않아도 사용하겠다는 의미입니다.
using namespace ClientA;

namespace ClientB
{

	void Attack()
	{
		cout << "근거리 공격" << endl;
	}
}

int value = 20;
*/

// 기본 매개변수
/*
// 함수를 선언할때 매개변수를 선언과 동시에 초기화하는 매개변수입니다.
void Function(int x = 20, int y = 30) 
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}*/	

int main() 
{
	// 범위 지정 연산자란?
	/*
	// 여러 범위에서 식별되는 식별자를 구분하는데 사용하는 연산자입니다.
	int value = 10; // 지역 변수 value
					// 스택 영역
	*/

	// 컴퓨터 언어 이론 (범위 규칙)
	/*
	// 전역 변수와 같은 이름의 지역변수가 선언되었을때,
	// 가장 가까운 범위에 존재하는 변수의 이름을 사용하는 규칙입니다.

	std::cout << "value의 값 : " << value << std::endl;
	std::cout << "전역 변수 value의 값 : " << ::value << std::endl;

	Attack(); // using namespace를 사용하기 때문에
			  // ClientA::
			
	ClientB::Attack();
	*/

	// 기본 매개변수
	/*
	// 기본 매개변수를 선언하게 되면, 함수의 인수를 전달하지 않아도 사용할 수 있습니다.

	// 함수에 인수를 전달할때 매개변수의 왼쪽부터 값이 들어갑니다.
	Function();
	*/

	

	// getline() 함수 : 표준입력을 받는경우 Enter의 여부에 따라 입력받을 문자열을 구분합니다.
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