#include <iostream>
void simple();
using namespace std;
int main(){
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() will if finished with the simple() function.\n";
    return 0;
}
void simple(){
    cout << "I`m but a simple function.\n";
}