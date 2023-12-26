#include <vector>
#include <list>
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
	};

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
	vector<int> v;

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = i + 1;
	}

	/*for (int i = 0; i < 500; ++i)
	{
		int ind = rand() % v.size();
		out << v[ind];
		ENDL;
	}*/

	list< My::R> lR;
	list< vector<int> > lArrV;
	list<int> lInt;

	//lInt[50];


	list<int>::iterator it;

	it = lInt.begin();

	lInt.push_back(10);
	lInt.push_back(10);
	lInt.push_back(10);
	lInt.push_back(1);
	lInt.push_back(1);
	lInt.push_back(1);
	lInt.push_back(1);

	it = lInt.begin();


	ENDL;
	for (int i = 0; i < lInt.size() ;++i)
	{
		out << *it <<" ";
		++it;
	}

	ENDL;
	it = lInt.begin();

	for (; it != lInt.end(); ++it)
	{
		out << *it << " ";
		lInt.insert(it, 1);
	}

	ENDL;

	out << lInt;


	ENDL;
	it = lInt.begin();

	for (; it != lInt.end();)
	{
		out << *it << " ";
		++it;
		lInt.insert(it, -1);
	}

	ENDL;
	out << lInt;

	ENDL;

	list<int>::reverse_iterator rit;
	ENDL;
	rit = lInt.rbegin();
	for (; rit != lInt.rend();rit++)
	{
		out << *rit << " ";
	}

	//it = next(it, 5);
	//it = prev(it, 5); //Не Изменяют параметр
	//advance(it, -5); //Изменяет параметр

	it = lInt.end(); 	
	it--;

	ENDL;
	


	for (; true; --it)
	{
		if (*it == -1)
		{
			it = lInt.erase(it);//Правее
			--it;
		}


		out << *it <<" ";



		if (it == lInt.begin())
			break;
	}



}