#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
        {
            cout << ch;
        }
        else
        {
            cout << ++ch;
            // cout << ch+1; //有趣实验
        }
        cin.get(ch);
        
    }
    cout << "\nPlease excuse the slight confusion.\n";
    
    return 0;
}