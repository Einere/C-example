// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
public:
	CTest(int R) :D(R) { //초기화할때, 매개변수를 일반변수로 했을경우.
		cout << "create and init the D : " << D << ", and R : "<< R << endl; //매개변수는 지역변수이므로 D,R 정상출력됨.
	}
	int Return(void) { //29,31행에서 호출될때는, 멤버변수인 D가 참조할 대상인 R이 사라져서, 쓰레기값을 반환함.
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

