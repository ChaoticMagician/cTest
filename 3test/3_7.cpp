#include <iostream>
#include <string>
using namespace std;
int main(){
    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    cout << "Values: uodates = " << updates <<" , *P_updates ="<< *p_updates<<endl;
    cout << "Values: &updates = " << &updates <<" , P_updates ="<< p_updates<<endl;
    int **p_updatess = &p_updates;
    cout <<" P_updates ="<< p_updatess<<endl;
    return 0;
};