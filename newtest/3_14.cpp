#include <iostream>
using namespace std;
int main(){
    int auks,bats,coots;
    auks = 19.99+21.99;

    bats = (int)19.99 + (int)21.99;

    coots = int (19.99) + int (21.99);
    cout << "auks = " << auks << " bats = " << bats << " coots = " << coots << endl;

    char ch = 'z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes the code is ";
    cout << static_cast<int>(ch) << endl;

    return 0;

}