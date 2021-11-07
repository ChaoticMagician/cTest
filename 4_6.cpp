#include <iostream>
using namespace std;
int main (){
    cout << "What was your house built?\n";
    int year;
    cin >> year;

    /*** error point ***/
    cin.get();

    cout << "What is it street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built: " << year <<endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}