#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <algorithm>

// Память под локал переменые
#pragma comment(linker, "/STACK:16777216")

using namespace std;

int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");

	int a[1000];

	int n; in >> n;
	for (int i = 0; i < n; ++i)
	{
		in >> a[i];
		a[i] *= -1;
	}

	make_heap(a, a + n);



}