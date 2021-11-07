#include <iostream>
using namespace std;
int main(){
    float a = 2.3e22f;
    cout << a <<endl;
    float b = a + 1.0f;
    cout << b << endl;
    cout << "b-a = " << b-a << endl;

    return 0;
}