// Start on page 56 with 3.7.1 Vector
#include <iostream>
#include <vector>
using namespace std;

void print_entry(int i);
void add_entry(int n);

struct Entry {
	string name;
	int number;
};


struct Entry entry1 = {"Alex", 61};

vector<Entry> phone_book(3);

int main()
{
	cout << entry1.name << " " << entry1.number << '\n';



	phone_book[0].name = "Alex";
	phone_book[0].number = 61;
	phone_book[1].name = "Sonya";
	phone_book[1].number = 53;
	phone_book[2].name = "Erika";
	phone_book[2].number = 22;

	print_entry(0);

	int i = 0;
	for(i; i < 3 ; i++)
		print_entry(i);

	add_entry(2);

	phone_book[3].name = "Anthony";
	phone_book[3].number = 25;
	phone_book[4].name = "Joseph";
	phone_book[4].number = 22;

	i = 0;
	for(i; i < 5 ; i++)
		print_entry(i);
}

void print_entry(int i)
{
	cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

void add_entry(int n) 
{
	phone_book.resize(phone_book.size()+n);
}