#include "BinTree.h"
#include <algorithm>
#include <iostream>
using namespace std;

// a^p mod M     O(log(p))
long long BinPow(long long a, long long p, long long M)
{ 
    if (p == 1) return a;
    if (p == 0) return 1;

    long long b = BinPow(a, p / 2, M);
    if (p % 2 == 1)
    {
        return ((((b * b) % M) * a) % M); // ^2 + 1
    }
    else
    {
        return ((b * b) % M);    // ^2
    }
}


long long TrueInv(long long a, long long M)
{ 
    return BinPow(a, M-2, M);
}


int main() 
{ 
 #ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG
    

    cout << TrueInv(11, 1e9 + 7);


}