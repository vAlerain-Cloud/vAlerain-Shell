#include <iostream>
#include "all.h"

using namespace std;
void COLOR_PRINT(const char* s, int color)
{
 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
 printf(s);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
} //һ���� 
/*0 = ��ɫ 8 = ��ɫ
1 = ��ɫ 9 = ����ɫ
2 = ��ɫ 10 = ����ɫ
3 = ǳ��ɫ 11 = ��ǳ��ɫ
4 = ��ɫ 12 = ����ɫ
5 = ��ɫ 13 = ����ɫ
6 = ��ɫ 14 = ����ɫ
7 = ��ɫ 15 = ����ɫ*/

int hwnd_to_int(HWND hwnd)
{
	return reinterpret_cast<intptr_t>(hwnd); //hwndת��int 
}	

HWND temp1 = GetForegroundWindow(); //��ȡ���ھ��api 

void intput() {
    string temp_1;
    while (true) {
        COLOR_PRINT("vAlerain-Shell>>", 13);
        cin >> temp_1;
        
        if (temp_1 == "getHwnd") {
            Sleep(2000);
            temp1 = GetForegroundWindow(); //��ȡ���ھ��api 
            string temp1_str = "[*]Handle to the window where the mouse is currently located:" + to_string(hwnd_to_int(temp1)) + "\n";
            COLOR_PRINT("", 1);
            cout << temp1_str;
        }

        if (temp_1 == "SendCloseGen") {
            int tempGen;
            cout << "inputHwnd��";
            cin >> tempGen;
            HWND temp__ = reinterpret_cast<HWND>(static_cast<long>(tempGen));

            SendMessage(temp__, WM_CLOSE, 0, 0);

            cout << "ok��\n";
        }

        if (temp_1 == "Ark") {
            system("vAlerianArk.exe");
        }
    }
}


int main() {
	COLOR_PRINT("vAlerain-Shell \n",13); 
	string temp1_str = "[*]Handle to the window where the mouse is currently located:"+to_string(hwnd_to_int(temp1))+"\n";
	COLOR_PRINT("",1); 
	cout<<temp1_str;
	
	intput();
	return 0;
}
