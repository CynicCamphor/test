// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	long n;
	cout << "输入一个年份";
	cin >> n;
	if (n %4 == 0)
	{
		cout << "闰年";
	}
	else
	{
		cout << "不是闰年";
	}
	cin.get();
    return 0;
}

