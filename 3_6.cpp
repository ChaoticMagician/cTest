#include <iostream>
#include <string>
#include <climits>
using namespace std;
enum colol {red,blue,orange,yellow,green,violet,indigo,ultraviolet};
int main(){
   colol AC;
   AC = red;
   int BC = red;
   int BCd = red;
   cout << AC << " "<< BC << endl;
   cout << "AC value = "<<AC<<" AC address = "<<&AC<<endl;
   cout << "BC value = "<<BC<<" BC address = "<<&BC<<endl;
   cout << "BCd value = "<<BCd<<" BCd address = "<<&BCd<<endl;
   cout << CHAR_BIT << "本系统一字节"<< CHAR_BIT<<"长"<<endl;
   cout << sizeof(int)<<  " "<< UINT_MAX<< endl; 
   return 0;
};