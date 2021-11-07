
#include <iostream>
using namespace std;
int main(){

    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "Enther your name;\n";
    cin.get(name,Size).get();
    cout << "Enther your favorite dessert:\n";
    cin.get(dessert,Size).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;

}