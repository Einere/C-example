// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

