// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	USERDATA user = { 20,"ö��" };
	user.Print();

    return 0;
}

