#include <iostream>
#include <string>
using namespace std;
int main(){
    double arr[5] = {21.1,32.8,23.4,45.2,37.4};
    double *pd = arr;
    cout << pd << endl;
    // cout << ++pd << endl;
    cout << *++pd << endl;
    cout << ++*pd << endl;
    cout << (*pd)++ << endl;
    cout << *pd << endl;
    cout << *pd++ << endl;
    cout << *pd << endl;
    
    //逗号运算符，将两个表达式放在一个表达式区域，，
    //{}大括号运算符，将多行语句组成语句块，放在之前一个语句区域
    cout << "Enter a word: ";
    string word ;
    cin >> word;
    char temp;
    for (int i = 0,j = word.size()-1; i < j;--j, ++i)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout <<word << endl;
    cout << "Done" << endl;
    
    return 0;
};