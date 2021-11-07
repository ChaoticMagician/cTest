#include <iostream>
using namespace std;
int main(){
    cout.put(88);
    char a = 88;
    cout << a << endl;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int guess(3.98324);
    int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    int aa =  -1234;
    unsigned long b = 123456;
    cout << aa+b << endl;
    
    return 0;
}