#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter numbers in the range 1-10 to find ";
    // cout << "my favorite number\n";
    // do
    // {
    //     cin >> n;
    // } while (n!=7);
    // cout << "Yes, 7 is my favorite.\n";
    double prices[5] = {4.99,10.99,6.87,7.99,8.49};
    for (auto E : prices )
    {
       cout << E << endl; 
    }
    for (auto &EE : prices )
    {
        EE *= 2;
    }
    for (auto E : prices )
    {
       cout << E << endl; 
    }
    

    return 0;
}