#include <iostream>
using namespace std;
int main()
{

	int i = 0; int j = 0;

	int n; cin >> n;

	//O(2^n)

	for (int i = 1; i < n; ++i)
	{
		// 1 2 4 8 16   2^n
		for (int j = 0; j < pow(2, i); ++j)
		{
			cout << "+";
		}
	}

	//1 + 2 + 4 + 8 + .. + 2^n = 2^(n+1) - 1
	// 1 = 1
	// 1 + 2 = 3
	// 7
	// 15
	// 31
	// 63




}



//
//int main()
//{
//	// Time 
//	//// Memory
//
//	int n;
//	int k;
//	std::cin >> n >> k;
//
//	// 1000 1000
//
//	// O(n)
//	for (int i = 0; i < n; ++i)
//	{
//
//
//	}
//	//1000
//}
