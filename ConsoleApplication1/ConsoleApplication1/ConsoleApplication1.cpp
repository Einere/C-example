// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
public:
	CTest(int &R) :D(R) { //�ʱ�ȭ�Ҷ�, �Ű������� ���������� �������, D(R)�� &D=&R�� ��������.
		cout << "create and init the D : " << D << ", and R : "<< R << endl; //�Ű������� ���������̹Ƿ� D,R ������µ�.
	}
	int Return(void) { //29,31�࿡�� ȣ��ɶ�, &D=&R=a. �ӽð�ü�� ���� �����̹Ƿ� R�� �Ҵ������ǵ� ���� ����.
		return D; 
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
	CTest T(a); 
	cout << T.Return() << endl;
	a = 20;
	cout << T.Return() << endl;
	cout << "end" << endl;

    return 0;
}

