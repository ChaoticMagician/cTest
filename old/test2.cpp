
#include "./include/best_header.h"
#include "./include/Sales_item.h"
	// int i= 100 ,sum = 0;
	using namespace std;
int main(){
	// Sales_item item1,item2;
	// std::cin >> item1 >> item2;
	// std::cout << item1 + item2 << std::endl;
	// Sales_item item1,item2;
	// std::cin >> item1 >> item2;
	// if (item1.isbn()==item2.isbn()){
	// 	std::cout<<item1+item2<<std::endl;
	// 	return 0;
	// }
	// else{
	// 	std::cout<<"Data must refer to same ISBN"<<std::endl;
	// 	return -1;
	// }
	// std::cout << item1 << std::endl;
	// for (int i = 0; i !=10; i++)
	// {
	// 	sum+=i;
	// };
	// std::cout<<sum<<std::endl;
	

	//引用1
	// int ival = 1.1;
	// int &rvall = ival;
	// int &refval2 = rvall;
	// std::cout<<refval2<<std::endl;

	//引用2
	// int i=1.2,&refi = i;
	// double d = 8.234,&refd = d;
	// // refi=d;
	// // refd = refi;
	// d = 3.1415926535;
	// i  = refd;
	// refd = 1.23456789;
	// std::cout<< std::setprecision(9) <<i<<",,"<<refi<<std::endl;
	// std::cout<< std::setprecision(10) <<d<<",,"<<refd<<std::endl;
	
	// //指针
	// double dval;
	// double *pd = &dval;
	// double *pd2 = pd;
	// std::cout<<pd<<"你好"<<pd2<<std::endl;
	
	// //指针解引入
	// double v=3.1415926;
	// double *pdV = &v;
	// double **pdp = &pdV;
	// std::cout<<pdV<<"地址指向内容"<<*pdV<<std::endl;
	// std::cout<<pdp<<"地址指向内容"<<*pdp<<std::endl;

	// //空指针
	// int *p1 = nullptr;
	// int *p2 = 0;
	// int *p3 = NULL;
	// std::cout<<p1<<"||"<<p2<<"||"<<p3<<std::endl;

	// //指针测试
	// int i = 0;
	// int* pdi = &i;
	// // double* pdi = &i;
	// // int* pdi = i;
	// std::cout<<pdi<<std::endl;

	// //指向引用的指针
	// int i= 42;
	// int *p;
	// int *&r = p;
	// r = &i;
	// *r = 0;
	// std::cout<<i<<"\n"<<
	// p<<"\n"<<
	// r<<"\n"<<std::endl;

	// //常量
	// const int bb = 159357;
	// //常量引用
	// const int &r = bb;
	// int test = 12 ;
	// const int &r1 = test ;
	// //常量的指针
	// const int *pd = &bb;
	// const int *pd1 = &test ;
	// pd = &test;
	// // *pd1 =128; error
	// // r1 =128;  error
	// cout<<bb<<"\n"
	// <<r<<"\n"
	// <<*pd<<"\n"
	// <<*pd1<<"\n";
	// <<r1<<endl;
	//引入常量，左值必须为常量引入
	// const int &r = bb;
	// int &r1 = r*2; error

	// //aout
	// const int ci = 12,&cr = ci;
	// auto b= ci;
	// b++;



	// // decltype和引用
	// int i = 42,*p = &i ,&r = i;
	// // decltype(r+0) b;
	// // decltype(r) b = i;
	// // decltype(*p) b;
	// cout<<b<<endl;
	


	int a;
	std::cin >> a;
	return 0;
}
