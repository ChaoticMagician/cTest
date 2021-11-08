#include <iostream>
using namespace std;
int main(){
    cout << "Enter the string countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for ( i = limit; i ; i-- )
    {
        cout << "i = " << i << "\n";
    }
    cout << "Dont now that i = " << i << "\n";
    
    return 0;
}