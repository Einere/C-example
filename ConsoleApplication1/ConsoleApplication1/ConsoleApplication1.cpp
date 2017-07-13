// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

