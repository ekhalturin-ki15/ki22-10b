#include <fstream>
#include <iostream>

#include <forward_list>    // ����������������
#include <list>            // ������������

#include <queue>
#include <vector>

#include <algorithm>
#include <memory>

#

/*
https://learn.microsoft.com/ru-ru/cpp/c-runtime-library/find-memory-leaks-using-the-crt-library?view=msvc-170
*/
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>

#include "List.h"

// ������ ��� ����� ���������
#pragma comment(linker, "/STACK:16777216")
// #pragma warning(disable  : 4996)
#define END cout << "\n"
using namespace std;

// ifstream in("input.txt");
// ofstream out("output.txt");

int main()
{
#ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG

    // unique_ptr ������ ���� �������� (�������)
    // shared_ptr ����������� ��� ��������� (�������)

    List myObjectList;
}
