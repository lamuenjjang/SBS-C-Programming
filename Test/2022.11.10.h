/*
#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main()
{
	// multi_set
	
	// set�� �ٸ��� �ߺ��� ���Ҹ� �����̳ʿ� ������ �� �ִ� �ڷᱸ���Դϴ�.
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
	// mSet.count() : ���� �����̳ʿ� �ش� ���� � �����ϴ��� ������ִ� �Լ��Դϴ�.
	cout << "mSet�� 7�̶�� ���� ���� �� �� �����ϳ���? : " << mSet.count(7) << endl;

	// 4�� ó������ ���� �κ��� ����ϱ��?
	multiset<int> ::iterator start;

	start = mSet.lower_bound(4);
	cout << "4�� ó������ ���� �κ� : " << *start << endl;
	

	// Node (struct)

	// stack, quene
	std::stack<int> Stack;

	return 0;
}*/
