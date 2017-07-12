// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
double Add(T a, T b) {
	return a + b;
}


int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;
	cout << Add('A', 'B') << endl;
	//cout << Add("A", "B") << endl;

    return 0;
}

