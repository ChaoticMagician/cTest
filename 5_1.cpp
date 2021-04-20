#include <iostream>
#include <string>
using namespace std;
int main (){
    int count = 0;
    int spaces = 0;
    char ch ;
    string str;
    cout << "Enther everything pleass~";
    while (cin.get(ch))
    {
        str+=ch;
        if (ch == ' ')
        {
            spaces++;
        }
        count++;
    }
    cout << spaces << " soaces ,";
    cout << count << " characters total in sentence.\n";
    return 0;
};