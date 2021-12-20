#include <iostream>
using namespace std;
int main (){
    cout << "This program may reformat your hard disk\n";
    cout << "and destroy all your data.\n";
    cout << "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch ;
    if (ch == 'y'|| ch == 'Y')
    {
        cout << "Yor were warned !\a\a\n";
    }
    else if (ch == 'n' ||ch == 'N')
    {
        cout << "A wise choice ... bye\n";
    }
    else{
        cout << "That wasn`t a y or n! Appaently yor "
        "can`t follow\ninstructions,so "
        "i`ll trash your disk anyway.\a\a\a\n";
    }
    return 0;
}