#include <iostream>
using namespace std;
int main(){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;

    cout << "tub= " << tub ;
    cout << " ,a maillion tubs = " << million*tub;
    cout << ",\n and ten maillion tubs = ";
    cout << 10*million*tub << endl;

    cout << "mint = " << mint <<  " and a million = " ;
    cout << million*mint << endl;
    return 0;
}