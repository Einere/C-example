// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

#define ADD(a, b)((a)+(b))

int Add(int a, int b) {
	return a + b;
}

inline int Add2(int a, int b) {
	return a + b;
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	cout << "ADD : " << ADD(a, b) << endl;
	cout << "Add : " << Add(a, b) << endl;
	cout << "Add2 : " << Add2(a, b) << endl;
	//cout << Add("A", "B") << endl;

    return 0;
}

