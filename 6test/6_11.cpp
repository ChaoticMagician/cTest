#include <iostream>
enum {red,orange,yellow,green,blue,violet,indigo};

int main(){
    using namespace std;
    cout << "Enther color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch(code){
            case red    : cout << "Her lips were red.\n"; break;
            case orange : cout << "Her hair were orange.\n"; break;
            case yellow : cout << "Her shoes were yellow.\n"; break;
            case green  : cout << "Her nails were green.\n"; break;
            case blue   : cout << "Her sweatsuit were blue.\n"; break;
            case violet : cout << "Her eyes were violet.\n"; break;
            case indigo : cout << "Her mood were indigo.\n"; break;
        }
        cout << "Enther color code (0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}