#include <iostream>
using namespace std;
const int Max = 5;
int main(){
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    for (int i =0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (int j = 0; j < Max; j++)
    {
        total += golf[j];
    }
    cout << total/Max << " = average score " << Max << " rounds\n";
    return 0;
}