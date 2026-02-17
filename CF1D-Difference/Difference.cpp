// ================================================
//                Platform : Codeforces
//                Contest  : CF1D
//                Problem  : Difference
//                Language : C++
//                Topic    : [Difference]
//                File     : Difference.cpp
// ================================================
#include <iostream>
using namespace std;
int main(){
    long long A,B,C,D;
    cin>> A>>B>>C>>D; 
    long long X = (A*B)-(C*D);
    cout << "Difference = " << X;
    return 0;
}