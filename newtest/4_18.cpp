#include <iostream>
using namespace std;
int main(){
  double * pd3 = new double [3];
  pd3[0] = 0.2;
  pd3[1] = 0.5;
  pd3[2] = 0.8;

  cout << "pd3[1] is " << pd3[1] << endl;
  pd3 = pd3 +1;
  cout << "Now pd3[0] is " << pd3[0] << " and " << "pd3[1] is " << pd3[1] << endl;
  cout << "Now pd3[2] is " << pd3[2] << endl;
  pd3 = pd3 -1;
  delete [] pd3;
  return 0;
}