#include <iostream>
using namespace std;
int main()
{

	int i = 0; int j = 0;

	int n; cin >> n;

	// O(n)

	//O(2^n)

	// O(1)
	

	// O(n ^ 2)


	for (int i = 1; i < n; ++i)
	{
		// 1 2 4 8 16   2^n

		std::vector<int> v(n);


		for (int j = 0; j < pow(2, i); ++j)
		{


			cout << "+";
		}
	}

	//O(log3(n)) O(log2(n)) Переход к другому





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
