// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
public:
	//�ʱ�ȭ�Ҷ�, �Ű������� �ܼ������� �������.
	CTest(int R) :D(R) {
		cout << "create and init the D : " << D << ", and R : "<< R << endl;
	}
	~CTest() {
		cout << "delete the D : " << D << endl;
	}
private:
	int &D;
};

int main()
{
	cout << "begin" << endl;
	int a = 10;
	CTest T(10); //T(a) ��� T(10)�� �ᵵ ������ ����� ���´�.
	cout << "end" << endl;

    return 0;
}

