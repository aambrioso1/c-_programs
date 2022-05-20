// Start on page 56 with 3.7.1 Vector
#include <iostream>
using namespace std;


struct Entry {
	string name;
	int number;
};

struct Entry entry1 = {"Alex", 61};

int main()
{
	cout << entry1.name << " " << entry1.number;
} 