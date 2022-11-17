/*
#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main()
{
	// multi_set
	
	// set과 다르게 중복된 원소를 컨테이너에 저장할 수 있는 자료구조입니다.
	std::multiset<int> mSet;
	mSet.insert(11);
	mSet.insert(12);
	mSet.insert(56);
	mSet.insert(44);
	mSet.insert(36);
	mSet.insert(70);
	mSet.insert(94);

	for (auto iter = mSet.begin(); iter != mSet.end(); iter++) {
		cout << *iter << endl;
	}
	// mSet.count() : 현재 컨테이너에 해당 값이 몇개 존재하는지 출력해주는 함수입니다.
	cout << "mSet에 7이라는 값은 현재 몇 개 존재하나요? : " << mSet.count(7) << endl;

	// 4가 처음으로 나온 부분은 어디일까요?
	multiset<int> ::iterator start;

	start = mSet.lower_bound(4);
	cout << "4가 처음으로 나온 부분 : " << *start << endl;
	

	// Node (struct)

	// stack, quene
	std::stack<int> Stack;

	return 0;
}*/
