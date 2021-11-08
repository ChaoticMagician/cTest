#include <iostream>
using namespace std;
int main(){
    int yams[3];
    yams[0] = 7;
    yams[1] = 9;
    yams[2] = 19;
    int yamcosts[3] = {20,30,5};
    cout << "Total yams = ";
    cout << yams[1]+yams[2]+yams[3]<< endl;
    cout << "The package with " << yams[0] <<" yams costs ";
    cout << yamcosts[0] << " cents per yam.\n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout << "The total yam expense is " <<total << " cents.\n";

    cout << "\nSize of yams array = "<< sizeof yams << " bytes.\n";
    cout << "Size of yams array = " << sizeof yams[0] << " bytes.\n";

    return 0;
}