#pragma once

int IndexOf(char* String, int Size, char FindCjaracter);

void Replace(char* String, int Size, char FindCjaracter, char ReplaceCharacter);


/*
	문자열 길이 세는 함수
	Param : String - 문자열
	Size - 최대 배열 크기
*/
int Length(char* String, int Size);