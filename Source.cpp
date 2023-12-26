#include <vector>
#include <list>
#include <map>
#include <set>

#include <iostream>
#include <fstream>
//#include <bits/stdc++.h>
using namespace std;

#define ENDL out<<"\n"

ifstream in("input.txt");
ofstream out("output.txt");


namespace My
{
	int min(int l, int r)
	{
		return (l < r) ? l : r;
	}


	struct R
	{
		int a = 1, b = 2, c = 3;

		bool operator<(R r)
		{
			return this->a < r.a;
		}
	};

}

bool operator<(My::R& l, My::R& r)
{
	return l.a < r.a;
}
ostream& operator<<(ostream& out, list<int> l)
{
	for (auto it = l.begin(); it != l.end(); ++it)
	{
		out << *it << " ";
	}
	return out;
}




int main()
{
	// operator < 
	//set<My::R> setV;// [ 4, 30, 50,  100, 101]
	//setV.insert({3,4,5});
	//setV.insert({3,4,5});
	//setV.insert({5,4,5});
	//setV.insert({6,4,5});
	//setV.insert({7,4,5});

	set<int> setInt = { 4,30, 100,101 };
	//Красное черное его высота log(n)

	setInt.insert(50); // set 
	if (setInt.count(30))
	{
		out << "YES";
	}
	else
	{
		out <<"NO";
	}


	if (setInt.count(31))
	{
		out << "YES";
	}
	else
	{
		out << "NO";
	}


	setInt.erase(31);
	setInt.erase(30);

	// Первый шаблом с определённым оператором <
	// Второй параметр, что храним по ключу
	map<int, My::R> mapMy;

	ENDL;
	out << mapMy[12].a;

}