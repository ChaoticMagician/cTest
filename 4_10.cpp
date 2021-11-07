#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main (){
    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before inPut: " << str.size() << endl;

    cout << "Enter a line of text:\n";
    cin.getline(charr,20);
    cout << "You entered: "<< charr << endl;

    cout << "Enter another line of text: \n";
    getline(cin,str);
    cout << "You entered: "<< str << endl;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before inPut: " << str.size() << endl;

    return 0;

}