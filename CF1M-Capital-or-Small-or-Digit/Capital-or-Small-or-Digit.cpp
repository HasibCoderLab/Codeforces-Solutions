// ===========================================
//                Platform : Codeforces
//                Contest  : CF1M
//                Problem  : Capital-or-Small-or-Digit
//                Language : C++
//                Topic    : [Capital-or-Small-or-Digit]
//                File     :Capital-or-Small-or-Digit.cpp
// ===============================================
#include <iostream>
using namespace std;
int main()
{
    char X;
    cin >> X;
    if ('0' <= X && X <= '9')
    {
        cout << "IS DIGIT";
    }

    else
    {
        cout << "ALPHA" << "\n";
        if ('A' <= X && X <= 'Z')
        {
            cout << "IS CAPITAL" ;
        }
        else if ('a' <= X && X <= 'z')
        {
            cout << "IS SMALL" << "\n";
        }
    }

    return 0;
}