// ================================================
//                Platform : Codeforces
//                Contest  : CF1K
//                Problem  : Max and Min
//                Language : C++
//                Topic    : [Max and Min]
//                File     :Max-and-Min.cpp
// ===============================================
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int mn = min(A, min(B, C));
    int mx = max(A,max(B,C));
    cout<< mn << " " << mx;

    return 0;
}
