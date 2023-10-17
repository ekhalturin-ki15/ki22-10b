#include <fstream>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <set>
#include "List.h"

using namespace std;

void Print(vector<int>& arrV) 
{ 
    for (int i = 0; i < arrV.size(); ++i)
    {
        arrV[i] = -100;
    }
}




int main()
{
    ifstream in("input.txt");

#ifdef _DEBUG
   FILE *IN, *OUT;
   freopen_s(&IN, "input.txt", "r", stdin);
   freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG

    vector<int> v(10000, -1);

    Print(v);

    List ls;

    int a;
    in >> a;
    cin >> a;

    const int iSize = 10;
    list<int> li(iSize);

    li.insert(li.end(), 50);
    li.insert(li.begin(), 50);

    // k
    // 000000000
    // 000000001
    // 000000010
    // 000000011

    // N log N
    for (int iSizeGr = 1; iSizeGr < iSize; iSizeGr *= 2)
    {

        //for (int i = iBlue; i < iGren;)
        //for (int i = iGren; i < iRed;)
    }
    cout << "Input values";

    set<int> setMy; 

    list < vector<vector<int>>> listMy2;

    //swap(ls.ptrBegin->iVal, ls.ptrBegin->ptrNext->iVal);

    //ls.ptrBegin = ls.ptrBegin->ptrNext;





}
