#include <iostream>
using namespace std;
int main (){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;
    cout<< "tub=" << tub;
    cout<< ", a million tube = " << million*tub;
    cout << ", \n and ten million tubs =";
    cout << 10*million*tub << endl;
    
    cout << "mint = "<< mint << " and a million mints = ";
    cout << million*mint <<endl;

    //float计算精度问题
    float a = 2.34e+22f;
    float b = a +1.0f;
    cout<<"a = "<< a << endl;
    cout << "b-a = " << b-a << endl;
    //浮点型，除法重载
    cout<<"Integer division:9/5 =" << 9/5 << endl;

    cout<<"Floating division:9.0/5.0 =" << 9.0/5.0 << endl;
    cout<<"Mixed division:9.0/5 =" << 9.0/5 << endl;
    cout<<"double division:1e7/9.0 =" << 1e7/9.0 << endl;
    cout<<"float division:1e7f/9.0f =" << 1e7f/9.0f << endl;
    return 0;

}