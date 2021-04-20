#include <iostream>
#include <string>
using namespace std;
int main(){
    char charone = 's';
    double wages[3] = {1000.0,2000.0,3000.0};
    short stacks[3] = {3,2,1};
    //用两种方法获取数组的地址
    double *pw = new double[3]{100.1,202.2,303.3};
    //double *pw = wages;
    short *ps = &stacks[0];
    //获取数组元素
    cout << " pw = " << pw << ", *pw = " << pw[0] << endl;
    cout << "add 1 to the pw pointer:\n";
    pw = pw +1;
    cout << " pw = " << pw << ", *pw = " << *pw << endl;
    cout<<endl;
    cout << " ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps +1;
    cout << "add 1 to the ps pointer:\n";
    cout << " ps = " << ps << ", *ps = " << *ps << endl;
    //原数组元素
    cout << "access tow element with array notation\n";
    cout << "stacks[0] = " << stacks[0] << " ,stacks[1] = " << stacks[1] << endl;
    cout << "access tow element with array notation\n";
    cout << "*stacks[0] = " << *stacks << " ,*stacks[1] = " << *(stacks + 1) << endl;
    //数组和指针的长度
    cout << "size of wages array :" << sizeof(wages) << endl;
    cout << "size of pw pointer :" << sizeof(pw) << endl;
    //deldte 
    pw = 0;
    delete [] pw;
    //数组的地址，是首元素地址还是
    short tell[10];
    cout <<tell << endl;
    cout <<&tell << endl;
    cout <<tell+1 << endl;
    cout <<&tell+1 << endl;
    cout <<&tell+2 << endl;
    cout <<(tell+1)-tell << endl;
    cout <<(&tell+1)-&tell << endl;
    cout <<(&tell+2)-&tell << endl;
    //字符串的指针打印cout
    char *pts = &charone;
    cout << pts << endl;


    return 0;
};