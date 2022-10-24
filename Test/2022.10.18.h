#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	// 클래스와 구현부
	/*
	Monster monster1;
	Monster monster2;

	monster1.Attack(10);
	*/

	// 영수증

	int a, b, price, num, sum = 0;
	cin >> price;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a;
		cin >> b;
		sum += a * b;
	}
	if (price == sum) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}

