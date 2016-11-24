// coding.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	char s[] = "A中";			//gbk编码

	wchar_t ws[] = L"A中";		//utf-16编码

	_TCHAR ts[] = _T("A中");	//根据项目的字符集设置变成gbk或utf-16中的一种编码
	
	return 0;
}

