#include <iostream>
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