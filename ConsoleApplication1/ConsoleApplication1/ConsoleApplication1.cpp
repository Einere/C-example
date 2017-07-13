// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

class USERDATA {
public:
	int age;
	char name[30];
	void Print(void) {
		printf("%d, %s \n", age, name);
	}
};

int main()
{
	USERDATA user = { 20,"철수" };
	user.Print();

    return 0;
}

