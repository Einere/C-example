// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

class C {
public:
	C() {
		cout << "C()" << endl; 
	}
	~C() {
		cout << "~C()" << endl;
	}

	C(const C &rhs) : N(rhs.N) {
		cout << "C(const C &rhs)" << endl;
	}
	int Get() const {
		return N;
	}
	void Set(int P) {
		N = P;
	}
protected:
	void Print() {
		cout << "C::Print()" << endl;
	}
private:
	int N=0;
};

class C2 :public C {
public:
	C2() {
		cout << "C2()" << endl;
	}
	void T() {
		Print();
		Set(5);
		cout << Get() << endl;
	}
};

int main(){
	C2 data;
	data.Set(10);
	cout << data.Get() << endl;

	data.T();

    return 0;
}

