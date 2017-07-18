#include "stdafx.h"
#include "MyString.h"


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	Release();
	int n_Length = strlen(pszParam);
	m_pszData = new char[n_Length+1];
	strcpy_s(m_pszData,sizeof(char)* (n_Length+1), pszParam);
	m_nLength = n_Length;
	return n_Length;
}


const char* CMyString::GetString()
{
	return m_pszData;
}


void CMyString::Release()
{
	if (m_pszData != NULL) {
		delete[] m_pszData;
	}
	m_pszData = NULL;
	m_nLength = 0;
}
