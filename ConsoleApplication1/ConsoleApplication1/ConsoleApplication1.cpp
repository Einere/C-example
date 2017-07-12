// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

