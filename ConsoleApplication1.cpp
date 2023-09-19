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
	//int a[100000]; // Ститическое объявление

	ifstream in("input.txt");
	ofstream out("output.txt");

	int n;
	in >> n; // std::stdin

	//int newA[n]; G++ может

	auto a = new int[n]; // Динамическое объявление [0 ; n)



	// O(n^2)


	//for (int i = 0; i < n; ++i)
	//{

	//	bool bl = false;
	//	for (int j = 0; j < n - i; ++j)
	//	{
	//		if (a[i] < a[j])
	//		{
	//			bl = true;
	//			/*int t = a[i];
	//			a[i] = a[j];
	//			a[j] = t;*/
	//			if (i != j)
	//				a[i] ^= a[j] ^= a[i] ^= a[j];


	//		}

	//	}
	//	// if (!bl)
	//	if (bl == false)
	//	{
	//		break;
	//	}
	//}




	//sort()


	//sort(); // O(n * log(n))  MSVCбыстрая G++  слияние куча



	//merge();


	//Range [0 R)
	//Range [-100 R)

	const int R = 101;

	int Range[R];
	//vector<int> Range(R);

	// O(R)
	for (int i = 0; i < R; ++i)
		Range[i] = 0;


	// O(n)
	for (int i = 0; i < n; ++i)
	{
		in >> a[i];
		Range[a[i]] += 1;
	}

	// O(R)
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < Range[i]; ++j)
		{
			out << i << " ";

		}
	}

	//O(n + R)





	//for (int i = 0; i < n; ++i)
	//{
	//	out << a[n - i - 1] << "\n";
	//}


	//cout << a[5];

	// C:\\prog\user\input.txt
	// input.txt





}



