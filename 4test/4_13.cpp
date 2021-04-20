#include <iostream>
const int Citys = 5;
const int Years = 4;
int main (){
  using namespace std;
  const char *cities[Citys] = {
    "a",
    "b",
    "c",
    "d",
    "e"
  };
  int maxtemps [Years][Citys] = {
    {1,2,3,4,5},
    {2,4,6,8,10},
    {3,6,9,12,15},
    {4,8,12,16,20},
  };
  cout << "Maximum temperatures for 2008 -2011\n\n";
  for (int i = 0; i < Citys; i++)
  {
    cout << cities[i] << ":\t";
    for (int j = 0; j < Years; j++)
    {
      cout << maxtemps[j][i] << ":\t";
    }
    cout << endl;
  }
  return 0;
}