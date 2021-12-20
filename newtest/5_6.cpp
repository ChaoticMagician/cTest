#include <iostream>
#include <cstring>
using namespace std;
int main(){
    cout << "Enter a word: ";
    string word;
    cin >> word;
    cout << word.size() << endl;
    for (int i = word.size(); i >=0; i--)
    {
        cout << word[i];
    }
    cout << "\nBye!\n";

    int x = 2,y = 0;
    y = (4+x++) +6+x++;
    cout << y <<endl;
    x = 2;
    y= (4+x++) + (6+x++);
    cout << y <<endl;


    return 0;
}