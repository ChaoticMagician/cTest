#include <iostream>
#include <cctype>
using namespace std;
int main(){
    cout << "enther text for analysis,and type @"
    " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chare = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);
    while (ch!='@')
    {
        if(isalpha(ch)) chare++;
        else if(isspace(ch)) whitespace++;
        else if(isdigit(ch)) digits++;
        else if(ispunct(ch)) punct++;
        else others;
        cin.get(ch);
    }
    
    cout << chare << " letters, "
        << whitespace << " whitespace, "
        << digits << " digits, "
        << punct << " punctuations, "
        << others << " oters.;\n";
    
    return 0;
}