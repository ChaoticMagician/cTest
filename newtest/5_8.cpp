#include <iostream>
using namespace std;
int main(){
    cout << "The Amazing Account will aun and average ";
    cout << "five number for you:\n";
    cout << "Please enter five values: \n";
    double number;
    double sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Value " << i+1 << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum <<endl;
    cout << "and average to " << sum/5 << ".\n";
    
    return 0;
}