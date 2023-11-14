#include "BinTree.h"
#include <algorithm>
#include <iostream>
using namespace std;

long long GCD(long long a, long long b)
{
    while (a*b)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    return a + b;

}

int main() 
{ 
 #ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG
    
    vector<int> arrA;
    vector<int> arrPrefH; // Все полином хеш на префиксах



    int iTemp;
    while (cin >> iTemp) arrA.push_back(iTemp);

    long long iCurX = 1;
    long long iX = 257;
    long long iMOD = 1e9 + 7;

    long long iH = 0;

    for (int i = 0; i < arrA.size(); ++i)
    {
        iH = (iH + arrA[i] * iCurX) % iMOD;
        arrPrefH.push_back(iH);
        iCurX = (iCurX * iX) % iMOD;
    }

    for (int i = 0; i < arrPrefH.size(); ++i)
    {
        cout << arrPrefH[i] << "\n";
    }

    cout << "---------------\n\n";
    //cout <<( arrPrefH[2] - arrPrefH[0]) / (iX) << "\n";
    // Пересчёт хеша для подстроки, имея префиксы, O(1)
    // 
    //25541

    cout << GCD(115, 25);
}