#include <iostream>
using namespace std;
const int Arsize = 16;
int main(){
    long long factorials[Arsize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2;i < Arsize; i++)
    {
        factorials[i] = i*factorials[i-1];
    };
    for (int i = 0; i < Arsize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    //修改步长
    int by;
    cout << "Enther an integer:";
    cin >> by;
    cout << "\n";
    for (int i = 0; i < 100; i+=by)
    {
        cout << i << endl;
    }
    
    //遍历字符串，使字符串反向打印；
    cout << "Enther a word :";
    string word ;
    cin >> word ;
    cout << word.size() << endl;
    for (int i = word.size()-1; i >= 0 ; i--)
    {
        cout << word[i];
    }
    cout << "\n Byb!\n";

    return 0 ; 
};