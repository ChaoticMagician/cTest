#include <iostream>
#include <string>
using namespace std;
int main (){
    char ch;
    int count = 0;
    string str = "";
    cout << "Enther characters ; enther # tu quit: \n";
    // cin >> ch;
    // while (ch != '#')
    // {
    //     cout << ch ;
    //     ++count;
    //     cin >> ch;
    // }
    // cout << endl << count << "  characters read .\n";
    // return 0;
    /**Do While fun*/
//    do
//    {
//        cin >> ch;
//        str += ch;
//        ++count;
//    } while (ch != '#');
//    cout << endl << count <<"  characters read.\n";
//    cout << str << " is "<< str.size()<< endl;
    /**cin.get(ch) fun**/
    cin.get(ch);
    while (ch!='#')
    {
        cout << ch;
        str +=ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count <<"  characters read.\n";
    cout << str << " is "<< str.size()<< endl;
    return 0 ; 
}