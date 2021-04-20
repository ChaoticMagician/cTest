#include "./include/best_header.h"
#include "./include/Sales_item.h"
int main(){
	Sales_item total;
	if (std::cin>>total)
	{
		Sales_item trans;
		int i=0;
		while (i<=6)
		{
			std::cin>>trans;
			if(total.isbn()==trans.isbn()){
				total += trans;
			}else{
				std::cout<<total<< std::endl;
				total = trans;
			}
			i++;
		}
		std::cout<<total<<std::endl;
	}
	else
	{
		std::cerr<<"No data?!"<<std::endl;
		return -1;
	}
	return 0;
}   