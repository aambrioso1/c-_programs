// From page 50 of C++ Programming Language (3rd Edition)

#include <iostream>
/* Note we can either write std::cin to indicate that cin is in the std namespace or
use the following command to include all of the std namespace in the global namespace.*/
// using namespace std;

int main()
{
	const double factor = 2.54;
	double x, in , cm;
	char ch = 0;

	std::cout << "enter length: ";

	std::cin >> x;
	std::cin >> ch;

	switch (ch) {
	case 'i':
		in = x;
		cm = x * factor;
		break;
	case 'c':
		in = x / factor;
		cm = x;
		break;
	default:
		in = cm = 0;
		break;
	}
	std::cout << in << " in = " << cm << " cm\n";
}