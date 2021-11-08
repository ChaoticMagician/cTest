#include <iostream>
using namespace std;
int main(){
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by <<"s:\n";
    for (int i = 0; i < 100; i+=by)
    {
        cout << i << endl;
    }
    
    return 0;
}