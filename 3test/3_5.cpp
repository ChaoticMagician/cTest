#include <iostream>
#include <string>
using namespace std;
struct widget{
    string brand;
    int type ;
    union{
        long id_num;
        char id_char[20];
    };
};
int main(){
    widget prize;
    prize.brand = "adfd";
    prize.type = 1;
    prize.id_num = 12;
    cout << prize.brand << " " << prize.type << " " << prize.id_num <<endl;
    return 0;

    
};
