// ================================================
//                Platform : Codeforces
//                Contest  : CF1E
//                Problem  : Area of a Circle
//                Language : C++
//                Topic    : [Area of a Circle]
//                File     :Area-Of-Circle.cpp
// ================================================
#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double R;
    cin>>R;
    double area  = 3.141592653 * R*R ;
    cout<< fixed << setprecision(9);
    cout<< area ;
    return 0;
}