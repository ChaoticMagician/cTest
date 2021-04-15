#include <iostream>
using namespace std;
int main (){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;
    cout << "int=>float: "<< tree <<endl;
    cout << "float=>int: "<< guess <<endl;
    cout << "big float=> int: "<< debt <<endl;
    //C++11 {}方式赋值，，被赋值者必须完全包容所赋值；
    const int code = 66;
    int x = 66;
    // char c1{31325};
    char c2 = {66};
    char c3 {code};
    char c4 = {x};
    x = 31325;
    char c5 =x;
    cout<< c2 <<endl;
    return 0;
}