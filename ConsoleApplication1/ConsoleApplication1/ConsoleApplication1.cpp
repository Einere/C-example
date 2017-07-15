// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
public:
	//초기화할때, 매개변수를 단순변수로 했을경우.
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
	CTest T(10); //T(a) 대신 T(10)을 써도 동일한 결과가 나온다.
	cout << "end" << endl;

    return 0;
}

