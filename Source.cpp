#include "BinTree.h"
#include <algorithm>
#include <iostream>
using namespace std;

using ll = long long;
#define ENDL cout << "\n"
double x;
const ll L = 0, R = 100, X = 0;

//Левый бин поиск
ll LBinSearch(ll l, ll r) // [l r)
{
    while (l!=r-1)
    {
        //ll m = (r + l) / 2;
        ll m = ((r - l) / 2) + l;

        if (x < m)
        {
            r = m; // r)
        }
        //else
        if (x >= m)
        {
            l = m; // [l
        }
        cout << "[" << l << " " << r << ")\n";
    }
    if (l < x) 
        ++l;
    return l;
}



// Правый бин поиск
ll RBinSearch(ll l, ll r)    // ((l, r]
{
    while (l != r - 1)
    {
        // ll m = (r + l) / 2;
        ll m = ((r - l) / 2) + l;

        if (x <= m)
        {
            r = m;    // r]
        }
        // else
        if (x > m)
        {
            l = m;    // (l
        }
        cout << "(" << l << " " << r << "]\n";
    }

    return r;
}


int main()
{
#ifdef _DEBUG
    FILE *IN, *OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif    // _DEBUG

    //lower_bound();
    //upper_bound();


    vector<int> v = { 1,2,3,4,5,5,5,5,5,5,5,6,7,8,9,10,11,12,13,14 };
    sort(v.begin(), v.end());


   // cout << *lower_bound(v.begin(), v.end(), X);
    ENDL;
    // >= 5 L

    auto it = lower_bound(v.begin(), v.end(), X);
    if (it == v.end())
    {
        cout << "AAAAAAAAAAAAAAAAAAAAAA";
    }


    // > 5  R
    ENDL;


    for (auto it = lower_bound(v.begin(), v.end(), X);
        it != upper_bound(v.begin(), v.end(), X); ++it)
    {
        cout << *it << " ";
    }

    cin >> x;

    cout << LBinSearch(0, R);
    ENDL;
    cout << RBinSearch(0, R);
    ENDL;

}