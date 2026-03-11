#include <iostream>

using namespace std;

int main()
{	//문자열 갯수 세기
	//문자열 중에서 특정 문자를 특정문 바꾸기
	//문자열 중에서 특정 문자 위치 찾기

	int A[3] = { 1,2,3 };
	char B[6] = { 'H','E', 'L', 'L','O', '\0' };

	char* C = B;
	C[3] = 'Q';
	cout << C << endl;

	for (int i = 0; i < 6; i++)
	{
		if (C[i] == 'Q')
		{
			break;
		}
		cout << C[i];
	}

	return 0;
}