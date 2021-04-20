#include <iostream>
#include <string>
using namespace std;
int main(){
    int nights =1001;
    int *pt = new int;
    *pt = 1001;
    delete pt;
    cout << "night value = " << nights << " : location " << &nights <<endl;
    cout << "int value = " << *pt << " : location " << pt <<endl;
    double *pd = new double;
    *pd = 10001.01;
    cout << "double value = " << *pd << " : location " << pd <<endl;
    cout << "size of pt = " << sizeof(pt) << endl;
    cout << "size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << endl;
    cout << "size of *pd = " << sizeof(*pd) << endl;
    //new 指向new数组的指针
    int * ps = new int [20];
    ps[0] = 123;
    ps[2] = 1;
    cout << ps << " d d d " << ps[0]  << " d d d " << ps[1]<< " d d d " << ps[2] << endl;
    delete [] ps;
    return 0 ;
};