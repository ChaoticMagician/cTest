#include <iostream>
using namespace std;
const double * f1(const double ar[],int n);
const double * f2(const double [],int n);
const double * f3(const double * ,int n);

int main()
{
    double av[3] = {1112.3,156.6,2227.9};
    
    const double *(*p1) (const double *,int)= f1;
    auto p2 = f2;

    // point to a functiong
    cout << "Using pointers to functions:\n";
    cout << " Address Value\n";
    cout << (*p1)(av ,3) << ": " << *(*p1)(av,3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;

    //pa an array of pointers
    // auto doesn`t work with list initialization
    const double *(*pa[3])(const double *,int) = {f1,f2,f3};
    // but it does work for initiializing to a single value
    // pd a pointer to first element of pa
    auto pd = pa;
    // pre-c++11 can use the following code instead
    // const double *(**pd)(const double *,int) = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " address Value\n";
    for (int i = 0; i < 3; i++)
    {
        cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
    }
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " address Value\n";
    for (int i = 0; i < 3; i++)
    {
        cout << pd[i](av,3) << ": " << *pd[i](av,3) << endl;
    }

    //what about a pointer to an array of function pointers
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " address Value\n";
    //easy way to declare pc
    auto pc = &pa;
    // pre-c++11 can use the following code instead
    // const double *(*(*pc)[3])(const double *,int) = &pa;
    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;

    // hard way to declare pc
    const double *(*(*pb)[3])(const double *,int) = &pa;
    // store return value in pdb
    const double * pdb = (*pb)[1](av,3);
    cout << pdb << ": " << *pdb << endl;

    //alternative notation
    cout << (*(*pb)[2])(av,3) << ": " << *(*(*pb)[2])(av,3) << endl;
    
    return 0;
}
const double * f1(const double * ar,int n){
    return ar;
}
const double * f2(const double ar[],int n){
    return ar+1;
}
const double * f3(const double ar[],int n){
    return ar+2;
}