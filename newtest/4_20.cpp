#include <iostream>
#include <cstring>
using namespace std;
int main (){
  char animal[20] = "bear";
  const char * bird = "wren";
  char * ps;

  cout << animal << " and " << bird << endl;

  // cout << ps << endl; //may display garbage ,may cause a crash

  cout << "Ehter a king of animal: ";
  cin >> animal;
  ps = animal;
  cout << ps << " ! \n";

  cout << "Before using strcpy(): \n";
  cout << animal << " at " << (int *) animal <<endl;
  cout << ps << " at " << (int *) ps <<endl;
  
  cout << "strlen(animal) = " << strlen(animal) << endl;
  ps = new char[strlen(animal)+1];
  strcpy(ps,animal);

  cout << "After using strcpy(): \n";
  cout << animal << " at " << (int *) animal <<endl;
  cout << ps << " at " << (int *) ps <<endl;

  delete [] ps;

  return 0;
}