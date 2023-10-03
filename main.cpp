#include <iostream>
#include <fstream>

#include <list>
#include <vector>
#include <queue>

#include <algorithm>

// Память под локал переменые
#pragma comment(linker, "/STACK:16777216")
//#pragma warning(disable  : 4996)
#define END cout << "\n"
using namespace std;

int i;

//ifstream in("input.txt");
//ofstream out("output.txt");


int arrInt[342];

int main()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG


	cout << arrInt;
	END;
	cout << arrInt + 1;
	END;


	cout << arrInt[10];
	END;
	cout << *(arrInt+10); // Массивы непрерывны
	//сдвинулись на 10 * sizeof значений адреса
	END;


	int a;
	cin >> a;

	std::list<int> li;

	//find
	//next(li.begin(), 10);

	li.push_back(12324);
	li.push_back(a); // O(1)
	li.push_front(a); // O(1)

	std::vector<int> vi;
	vi.push_back(a); // O(   )

	vi.size();
	vi.capacity();


	for (int i = 0; i < 1000; ++i)
	{
		vi.push_back(i);
		cout << vi.size() << " " << vi.capacity() << "\n";
	}

	deque<int> d;
	d.push_front(12312);


	vector<int> v = { 35, 54, 100, 100, 34543, 12, -3432, 324, -345, 34 };

	int pos = 3;
	int val = 777;

	vector<int> new_v;
	new_v.resize(v.size() + 1);

	//O(n) А в списках этого не нужно
	for (int i = 0; i < pos; ++i)
	{
		new_v[i] = v[i];
	}
	new_v[pos] = val;
	new_v.at(pos);
	for (int i = pos; i < v.size(); ++i)
	{
		new_v[i + 1] = v[i];
	}

	//ctrl k ctrl d  .clang format

	//new_v = { 35, 54, 100, 777, 100, 34543, 12, -3432, 324, -345, 34 };


}

