#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main(){
  char * name ;
  name = getname();
  cout << name << " at " << (int *) name << endl;
  cout << "Size of name: " << strlen(name) << endl;
  delete [] name ;

  name = getname();
  cout << name << " at " << (int *) name << endl;
  cout << "Size of name: " << strlen(name) << endl;
  delete [] name ;

  return 0;
}
char * getname(){
  char temp[80];
  cout << "Enter last name: ";
  cin.get(temp,80).get();
  char * pn = new char[strlen(temp)+1];
  strcpy(pn,temp);

  return pn;
}