// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
template<typename T>
class Stack {
public:
	Stack() {  }
	void Push(T para) {
		data[i] = para;
		i++;
	}
	void Pop(int para) {
		cout << *(data+para) << endl;
		para++;
	}

private:
	T data[10];
	int i = 0;
};

int main(){
	Stack<int> stack;
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	
	for (int i = 0; i < 3; i++) {
		stack.Pop(i);
	}

    return 0;
}

