#include <iostream>
#include <string>
using namespace std;
int main (){
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout << animal << " and " << bird <<endl;
    cout << "Enther a kind of animal: ";
    
    return 0;
};