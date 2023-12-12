#include "BinTree.h"
#include <algorithm>
#include <iostream>
using namespace std;

// a^p mod M     O(log(p))
long long BinPow(long long a, long long p, long long M)
{
    if (p == 0) return 1;
    if (p == 1) return a;

    long long b = BinPow(a, p / 2, M);
    if (p % 2 == 1)
    {
        return ((((b * b) % M) * a) % M);    // ^2 + 1
    }
    else
    {
        return ((b * b) % M);    // ^2
    }
}

long long Invers(long long a, long long M) { return BinPow(a, M - 2, M); }

int main()
{
#ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG

    vector<long long> arrXPow;
    long long         X = 257;
    long long         M = 1e9 + 7;
    vector<long long> arrPolHash;
    string            s;
    cin >> s;
    arrXPow.resize(s.size());
    arrPolHash.resize(s.size());

    long long XP    = 1;
    long long iPrev = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        arrXPow[i]            = XP;
        long long iCurPolHash = (int(s[i]) * XP) % M;
        iCurPolHash           = (iCurPolHash + iPrev) % M;
        arrPolHash[i]         = iCurPolHash;
        XP                    = (XP * X) % M;
        iPrev                 = iCurPolHash;
    }

    for (long long it : arrXPow) cout << it << " ";
    cout << "\n";
    for (long long it : arrPolHash) cout << it << " ";

    long long l, r;
    cin >> l >> r;

    cout << "\n";


    long long m;
    if (l)
        m = (arrPolHash[r] - arrPolHash[l - 1] + M) % M;
    else
        m = arrPolHash[r];

    cout << (m * Invers(arrXPow[l], M)) % M;
    //526919761
}