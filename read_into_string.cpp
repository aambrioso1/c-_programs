#include <iostream>
using namespace std;

int main() 
{
   string str;

   cout << "Please enter your name\n";
   //cin >> str;
   getline(cin,str);
   std::cout << "Hello, " << str << "!\n";
} 