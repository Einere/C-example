// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "MyString.h"


int main()
{
	CMyString strData;
	strData.SetString("나랏말싸미 듕귁에 달아");
	cout << strData.GetString() << endl;

    return 0;
}

