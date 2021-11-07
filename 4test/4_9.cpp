#include <iostream>
#include <ctime>
using namespace std;
int main (){
    cout << "Enther the delay time , in seconde; ";
    float sece;
    cin >> sece;
    clock_t delay  = sece*CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock()-start <delay);
    cout << "with " << sece << " seconde " << "\n Now! done.\a\n";
    return 0;

};