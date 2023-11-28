#include "BinTree.h"
#include <algorithm>
#include <iostream>
using namespace std;

long long Invers(long long a, long long b)
{
    vector<long long> arrA = { min(a, b) };
    vector<long long> arrB = { max(a, b) };


    while (a*b)
    {
        if (a > b)
            a %= b;
        else
            b %= a;

        arrA.push_back(min(a, b));
        arrB.push_back(max(a, b));
    }

    long long d = a + b;
    long long x = 1, y = 0, nextX, nextY;

    for (int i = arrB.size() - 2; i >= 0; --i)
    {
        nextY = x;
        if (((d - nextY * arrB[i]) % arrA[i]) != 0)
            cout << "AAaaAAAaA\n";
        nextX = (d - nextY * arrB[i]) / arrA[i];
        x     = nextX;
        y     = nextY;
    }

    cout << d << " = " << arrA.front() << " * " << x << " + " << arrB.front()
         << " * " << y << "\n";

    return x;
}

int main() 
{ 
 #ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG
    
    //cout << int('s');
    //return 0;

    //long long a, b;
    //cin >> a >> b;
    //cout << GCD(a, b);
    //return 0;

    string s;
    vector<int> arrPrefH; // Все полином хеш на префиксах



    int iTemp;
    cin >> s;

    long long iCurX = 1;
    long long iX = 257;
    long long iMOD = 1e9 + 7;

    long long iH = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        iH = (iH + s[i] * iCurX) % iMOD;
        arrPrefH.push_back(iH);
        iCurX = (iCurX * iX) % iMOD;
    }

      for (int i = 0; i < arrPrefH.size(); ++i)
    {
        cout << arrPrefH[i] << "\n";
    }

    //long long iShiftHash = ((arrPrefH[5] - arrPrefH[1]) % iMOD + iMOD) % iMOD;

    //long long iInvers = Invers(iMOD, iX * iX);

    //iShiftHash = ((iShiftHash * iInvers)% iMOD + iMOD) % iMOD;

    //cout << iShiftHash;
    ////669942659

  /*  for (int i = 0; i < arrPrefH.size(); ++i)
    {
        cout << arrPrefH[i] << "\n";
    }*/

    //cout <<( arrPrefH[2] - arrPrefH[0]) / (iX) << "\n";
    // Пересчёт хеша для подстроки, имея префиксы, O(1)
    // 
    //25541

    
}