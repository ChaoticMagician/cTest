#include <iostream>
using namespace std;
int main(){
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit;\n";
    do
    {
        cin >> ch;
        ++ count;
        cout << ch;
    } while (ch != '#');
    cout << endl << count << " characters read\n";

    return 0;
}