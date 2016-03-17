#include<iostream>
#include<string>

struct Sales_data{
	std::string isbn;
	unsigned numSold;
	double revenue;
	};

typedef struct Sales_data sdata;

int main(void){
	
	sdata data1, data2;
	double price(0);

	std::cout << "Insert isbn, num sold, and price" << std::endl;
	
	std::cin >> data1.isbn >> data1.numSold >> price;
	data1.revenue = data1.numSold * price;

	std::cin >> data2.isbn >> data2.numSold >> price;
	data2.revenue = data2.numSold * price;

	if (data1.isbn == data2.isbn){
		unsigned totalSold=data1.numSold+data2.numSold;
		double totalRevenue=data1.revenue+data2.revenue;
		double priceAvg=0;
			std::cout << data1.isbn << " " << totalSold << " " << totalRevenue << " ";
			if (totalSold!=0){
				priceAvg=totalRevenue/totalSold;
				std::cout << priceAvg << std::endl;
				} else {
					std::cout << "No Books Sold :(" << std::endl;
				}
	} else {
		std::cout << "Error! Ensure the ISBN number for the books entered is the same." << std::endl;
	}

return 0;

}
