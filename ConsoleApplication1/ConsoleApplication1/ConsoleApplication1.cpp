// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

class C {
public:
	C() {
		cout << "C()" << endl;
		N = new char[32];
	}
	virtual ~C() {
		cout << "~C()" << endl;
		delete N;
	}
	/*
	C(const C &rhs) : N(rhs.N) {
		cout << "C(const C &rhs)" << endl;
	}
	int Get() const {
		return N;
	}
	void Set(int P) {
		N = P;
	}
	*/

private:
	char *N;
};

class C2 :public C {
public:
	C2() {
		cout << "C2()" << endl;
		M = new int;
	}
	~C2() {
		cout << "~C2()" << endl;
		delete M;
	}
	/*
	void T() {
		Print();
		Set(5);
		cout << Get() << endl;
	}
	*/
private:
	int *M;
};

int main(){
	C *A = new C2;
	delete A;


    return 0;
}

