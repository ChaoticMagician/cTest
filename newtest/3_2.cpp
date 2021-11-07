#include <iostream>
#define ZERO 0 //makes ZERO symbol for 0 value 
#include <climits>
int main(){
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." <<endl
        << "Add $1 to each accout." <<endl << "Now ";
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam << "dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" <<endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << endl << " Sue has " << sue << endl;
    sam -= 1;
    sue -=1;
    cout << "Sam has " << sam << endl << " Sue has " << sue << endl;

    return 0;
}