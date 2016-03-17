#include <vector>
using std::vector;

class EXAMPLE{
	public:
	static double rate = 6.5;
	static const int vecSize = 20;
	static vector<double> vec(vecSize);
};

int main(void){
	double EXAMPLE::rate;
	vector<double> EXAMPLE::vec;
return 0;
}
