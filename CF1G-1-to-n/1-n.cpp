/*============================================================
    Codeforces - CF1G
    Problem : Summation from 1 to N
    Contest : Data Types & Conditions
    Topic   : Data Types & Conditions
    File    : 1-n.cpp
    Author  : Hasib Hasan
============================================================*/
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long result = N * (N + 1) / 2;
    cout << result << endl;
    return 0;
}
