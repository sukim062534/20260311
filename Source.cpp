#include <iostream>
#include "StringUtil.h"

using namespace std;




int main()
{	
	int A = 10;
	char Temp[100] = {"Hello World"};
	//for (int i = 0; i < 100; ++i)
	//{
	//	Temp[i] = 'A';
	//}

	int StringLEngth = Length(Temp, 100);

	cout << StringLEngth << endl;

	if(false)
	{
		int A = 20;
		cout << &A << endl;
	}
	
	cout << &A << endl;
	
	Replace(Temp, 100, 'l', 'f');
	Temp[99] = 0;
	cout << Temp << endl;

	return 0;
}
