#include <iostream>
#include "all.h"

using namespace std;
void COLOR_PRINT(const char* s, int color)
{
 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);g
 printf(s);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
/*0 = ��ɫ 8 = ��ɫ
1 = ��ɫ 9 = ����ɫ
2 = ��ɫ 10 = ����ɫ
3 = ǳ��ɫ 11 = ��ǳ��ɫ
4 = ��ɫ 12 = ����ɫ
5 = ��ɫ 13 = ����ɫ
6 = ��ɫ 14 = ����ɫ
7 = ��ɫ 15 = ����ɫ*/

int main() {
	
	COLOR_PRINT("vAlerain-Shell",13); 
	return 0;
}
