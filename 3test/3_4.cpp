#include <iostream>
#include <string>
using namespace std ;
struct corgle1 {
    unsigned int SN :4;
    unsigned int :4;
    bool goodIn :1;
    bool goodTorgle:1;
};
union ong4all{
    long long_val;
    int int_val;
    double double_val;
};

int main (){
    corgle1 cor= {24,true,true};
    cout << cor.SN <<"  "<<cor.goodIn <<"  " <<cor.goodTorgle <<"  \n";
    ong4all pail;
    pail.int_val = 14;
    int aa = 14;
    cout << sizeof(pail)<<" " << sizeof(aa) <<"\n";
    ong4all pali;
    pali.long_val = 15;
    cout << pail.int_val <<"  "<<pali.long_val <<"  \n";
    
    return 0;
}