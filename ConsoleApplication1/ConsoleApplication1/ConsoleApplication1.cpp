// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
//using namespace std;

namespace TEST {
	int n = 100;

	void T_func(void) {
		std::cout << "TEST::T_func()" << std::endl;
	}
}

int main()
{
	TEST::T_func();
	std::cout << TEST::n << std::endl;

    return 0;
}

