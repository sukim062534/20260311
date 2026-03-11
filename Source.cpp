#include <iostream>
#include "StringUtil.h"

using namespace std;



int main()
{	
	//cumputer memory unmanaged language / human managed language
	int Size = 100;
	//heap에 동적으로 int 사이즈 만들고 주소 반환
	int* Players = new int[Size];
	Players[3] = 10;

	
	//delete Players; //첫번째만 반환하고 나머지 99칸은 인어버림 메모리 릭 발생
	delete[] Players; //포인터 변수의 주소부터 할당 받은 배열 만큼의 heap 영역 반환

	Players = nullptr;

	if (Players) 
	{

	}

	return 0;
}
