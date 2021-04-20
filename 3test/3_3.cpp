#include <iostream>
#include <string>
using namespace std ;
struct inflatable {
    string name;
    float volume;
    double price;
};
int main (){
    inflatable guests[2] = {
        {"Bambi",0.5,21.99},
        {"Godzilla",200,565.99}
    };
    cout << "The guests " << guests[0].name << " and " << guests[1].name << endl;
    cout << "have a combined volume of " << guests[0].volume+guests[1].volume << " cubic feet .\n";
    return 0 ;
}