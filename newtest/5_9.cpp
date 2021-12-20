#include <iostream>
#include <cstring>
using namespace std;
int main(){
    cout << "Enter a word: ";
    string word;
    char test[80];
    cin >> word;
    cout << word.size() << endl;
    char *temp = new char;
    int i,j;
    for (j =0 ,i = word.size()-1; j<=i ; --i,j++)
    {
        // temp = word[i];
        // word[i] = word[j];
        // word[j] = temp;
        *temp = word[i];
        word[i] = word[j];
        word[j] = *temp;
        
        // sprintf(test,"%d",i);
        // cout << test <<endl;
        // word[j] = test[0];
        // sprintf(test,"%d",j);
        // cout << test <<endl;
        // word[i] = test[0];
    }
    cout << word << endl;
    cout << "\nBye!\n";

    delete temp;

    return 0;
}