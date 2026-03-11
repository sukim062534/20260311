#include <iostream>

using namespace std;

int main()
{	//문자열 갯수 세기
	//문자열 중에서 특정 문자를 특정문 바꾸기
	//문자열 중에서 특정 문자 위치 찾기

	char B[6] = { 'H','E', 'L', 'L','O', '\0' };

	char* C = B;

	cout << C << endl;

	char D[] = "Hello";
	int p = 0;
	while (D[p]) {
		p++;
	}
	cout << p << endl;

	C[3] = 'Q';

	cout << C << endl;

	int stop = 'Q';


	for (int i = 0; i < 6; i++)
	{

		if (B[i] == stop)
		{
			cout << i + 1 << "번째";
		}


	}
	return 0;
}