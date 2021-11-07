#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    char word[5] ="?ate";
    for (char i = 'a'; strcmp(word,"wate"); i++)
    {
        cout << word << " ? " << endl;
        word[0] = i;
    }
    cout << "now loop ends , word is "  << word <<endl ;
    //Ctype string  and C++ string  check ;
    string word2 = "?ate";
    for (char i = 'a'; word2 !="mate"; i++)
    {
        cout << word2 << endl;
        word2[0] = i;
    }
    cout << "now loop ends , word is "  << word2 <<endl ;
    
    return 0 ;
};