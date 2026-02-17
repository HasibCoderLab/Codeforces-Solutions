// ================================================
//                Platform : Codeforces
//                Contest  : CF1N
//                Problem  : CHAR
//                Language : C++
//                Topic    : [CHAR]
//                File     :char.cpp
// ===============================================
#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z')
        X = X - 32;
    else
        X = X + 32;

    cout << X << endl;

    return 0;
}