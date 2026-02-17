
// ================================================
//                Platform : Codeforces
//                Contest  : CF1L
//                Problem  : The Brothers
//                Language : C++
//                Topic    : [The Brothers]
//                File     :The-Brothers.cpp
// ===============================================
#include <iostream>
using namespace std;
int main()
{
    string F1, S1;
    string F2, S2;
    // input
    cin >>F1 >>S1;
    cin >> F2>>S2;
    if(S1 == S2 ){
        cout << "ARE Brothers" ;
    }else{
        cout<< "NOT";
    }
    return 0;
}