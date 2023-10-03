#include <iostream>
#include <fstream>

// Память под локал переменые
#pragma comment(linker, "/STACK:16777216")
//#pragma warning(disable  : 4996)

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

	int a;
	cin >> a;

	a += 100;

#ifdef _DEBUG
	cout << a << "\n";


#endif // _DEBUG

}