#include <iostream>
#include <fstream>

#include <list>
#include <vector>
#include <queue>

#include <algorithm>
#include <memory>
/*https://learn.microsoft.com/ru-ru/cpp/c-runtime-library/find-memory-leaks-using-the-crt-library?view=msvc-170*/
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


// Память под локал переменые
#pragma comment(linker, "/STACK:16777216")
//#pragma warning(disable  : 4996)
#define END cout << "\n"
using namespace std;

int i;

//ifstream in("input.txt");
//ofstream out("output.txt");

int main()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG
	{
		unique_ptr<int> ptrInt;

		int a;
		cin >> a;


		int* ptrToInt;

		cout << a;
		END;
		cout << &a;
		END;
		ptrToInt = &a; // & получить адрес

		cout << ptrToInt;
		END;

		cout << &ptrToInt;
		END;

		cout << *ptrToInt; // * (обратное действие &) получиться значение по адресу
		END;

		char* ptrChar = new char;
		unique_ptr<int> ptrUInt {new int}; // Для избежания утечек памяти
	}
	_CrtDumpMemoryLeaks();
}

