#include <iostream>
using namespace std;
const int Size = 16;
int main(){
    long long factorials[Size];
    factorials[0]=factorials[1] = 1LL;
    for (int i = 2; i < Size; i++)
    {
        factorials[i] = factorials[i-1]*i;
    }
    for (int i = 0; i < Size; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    
    return 0;
}