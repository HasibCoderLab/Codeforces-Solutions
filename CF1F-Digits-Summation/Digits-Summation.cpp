// ================================================
//                Platform : Codeforces
//                Contest  : CF1F
//                Problem  : Digits Summation$
//                Language : C++
//                Topic    : [Digits-Summation]
//                File     :Digits-Summation.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    long long N, M;
    cin >> N >> M;
    long long n = N % 10;
    long long m = M % 10;
    cout << n + m;
    return 0;
}
