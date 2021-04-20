#include <iostream>
using namespace std;
int main(){
    int testArr[10] = {20,20,20,20,20,19,20,18,20,20};
    cout << "Doing it right: \n" << endl;
    int i ;
    for ( i = 0; testArr[i] == 20; i++)
    {
        cout << "quiz "<< i << " is a 20 \n";
    };
    cout << "Doing it dangerously wrong: \n" << endl;
    for ( i = 0; testArr[i] = 20; i++)
    {
        cout << "quiz "<< i << " is a 20 \n";
    };
    return 0;
};