#include <iostream>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];

    cout << "Enther your name;\n";
    cin >> name;
    cout << "Enther your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}