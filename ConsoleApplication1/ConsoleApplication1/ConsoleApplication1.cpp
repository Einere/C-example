// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
	int D;

public:
	CTest(int p) : D(p) {
		cout << "create and init the D" << endl;
	}
	~CTest() {
		cout << "delete the D : " << D << endl;
	}
};

int main()
{
	CTest A(10);

    return 0;
}

