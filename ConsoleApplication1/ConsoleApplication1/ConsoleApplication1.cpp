// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class CTest {
public:
	CTest(int &R) :D(R) { //초기화할때, 매개변수를 참조변수로 했을경우, D(R)은 &D=&R과 같아진다.
		cout << "create and init the D : " << D << ", and R : "<< R << endl; //매개변수는 지역변수이므로 D,R 정상출력됨.
	}
	int Return(void) { //29,31행에서 호출될때, &D=&R=a. 임시객체에 대한 참조이므로 R이 할당해제되도 참조 가능.
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

