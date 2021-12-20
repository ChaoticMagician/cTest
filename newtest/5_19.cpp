

#include <iostream>
using namespace std;
int main(){
    int ch;
    int count = 0;
    cout << "Enter characters; enter EOF to quit;\n";
    while ((ch = cin.get()) != EOF)
    {
        ++count;
        cout.put(char(ch));
    }
    
    cout << endl << count << " characters read\n";
    

    return 0;
}