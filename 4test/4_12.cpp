#include <iostream>
using namespace std;
int main(){
  char ch;
  int count = 0;
  // cin.get(ch);
  // while (cin.fail() == false){
  //   cout << ch;
  //   ++count;
  //   cin.get(ch);
  // }
  // cout << endl << count << " characters read\n";
  // return 0 ;
  while (cin.get(ch)){
    cout << ch;
    ++count;
  }
  cout << endl << count << " characters read\n";
  return 0 ;
};