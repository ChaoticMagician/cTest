#include<iostream>
using namespace std;
int main(){
    int higgens=5;
    int * pt = &higgens;

    cout << "value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt  = " << *pt 
        << "; value of  pt "<< pt <<endl;

    cout << sizeof(pt) << endl;
    cout << sizeof(higgens) << endl;
    return 0;

}