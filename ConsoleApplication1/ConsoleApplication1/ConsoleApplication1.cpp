// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class C {
public:
	C() { cout << "C()" << endl; }
	~C() {}

	C(const C &rhs) {
		this->N = rhs.N;
		cout << "C(const C &rhs)" << endl;
	}
	int Get() {
		return N;
	}
	void Set(int P) {
		N = P;
	}
	void Set(double P) = delete;
private:
	int N = 0;
};

int main()
{
	C a;
	a.Set(10);
	cout << a.Get() << endl;

	C b(a);
	cout << b.Get() << endl;
	

    return 0;
}

