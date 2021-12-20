
#include <iostream>
using namespace std;
int main(){
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit;\n";
    /**1**/
    // do
    // {
    //     cin.get(ch);
    //     ++ count;
    //     cout << ch;
    // } while ( cin.fail() == false );
    // cout << endl << count << " characters read\n";
    /**2**/
    // cin.get(ch);
    // while (cin.fail() == false)
    // {
    //     cout << ch;
    //     ++count;
    //     cin.get(ch);
    // }
    /**3**/
    while (cin.get(ch))
    {
        ++count;
        cout << ch;
    }
    
    cout << endl << count << " characters read\n";
    

    return 0;
}