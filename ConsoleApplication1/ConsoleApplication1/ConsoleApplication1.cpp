// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class C {
public:
	C() : N(0) {};
	~C() {};

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

	C b;
	b.Set(5.5);
	cout << b.Get() << endl;
	

    return 0;
}

