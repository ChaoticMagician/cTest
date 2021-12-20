#include <iostream>
using namespace std;
const int Fave = 27;
int main(){
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite numer: ";
    do
    {
        cin >> n;
        if (n < Fave)
        {
            cout << "Too low \n guess again; ";
        }else if(n>Fave){
            cout << "Too high \n guess agein: ";
        }else{
            cout << Fave << " is right!\n";
        }
        
    } while (n != Fave);
    
    return 0;
}