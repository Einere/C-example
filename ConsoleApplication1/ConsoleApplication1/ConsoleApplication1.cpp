// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

namespace TEST {
	int n = 100;

	void T_func(void) {
		cout << "TEST::T_func()" << endl;
	}
}

int main()
{
	TEST::T_func();
	cout << TEST::n << endl;

    return 0;
}

