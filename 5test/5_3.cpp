#include <iostream>
using namespace std;
const int Fave = 27;
int main(){
    int n;
    cout << "Enther a number in the range 1-100 to find "
    << " my favorite number.\n";
    do {
        cin >> n;
        if (n>Fave)
        {
            cout << "Too high , guess again: ";
        }
        else if (n<Fave)
        {
            cout << "tOO low , guess again: ";
        }
        else
        {
            cout << n << " is right!\n";
        }
        
    }while (n != Fave);
    return 0 ;
};