#include <iostream>
using namespace std;
const int ArSize  = 6;
int main(){
    float naaq[ArSize];
    cout << "Enther the NAAQs (new Age Awareness Quotients) "
    << "of\nyour neighbors. Program terminates "
    << "when you make\n" << ArSize << " entries "
    << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp ;
    while (i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i<ArSize){
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i==0)
    {
        cout << "No data --bye\n";
    }
    else{
        cout << "Enther your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for(int j = 0;j <i;j++){
            if (naaq[j] > you)
            {
                ++count;
            }
        }
        cout << count;
        cout << " of your neighbora have greater awareness of\n"
        << "the New Age then you do.\n";
    }
    return 0;
}