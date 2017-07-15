// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
	int D;

public:
	CTest() :D(10) {
		cout << "create and init the D" << endl;
	}
	~CTest() {
		cout << "delete the D : " << D << endl;
	}
};

int main()
{
	cout << "begin" << endl;
	CTest *p = new CTest;
	cout << "test" << endl;
	delete p;
	cout << "end" << endl;

    return 0;
}

