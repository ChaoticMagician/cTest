#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(){
    inflatable choice;
    inflatable bouquet = {
        "sunflowers",
        0.20,
        12.49,
    };

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price <<endl;

    choice = bouquet;

    cout << "choice: " << choice.name << " for $";
    cout << choice.price <<endl;

    return 0;

}