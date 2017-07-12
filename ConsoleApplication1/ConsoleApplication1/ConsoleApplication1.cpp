// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

