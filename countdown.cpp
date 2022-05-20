#include<iostream>
using namespace std;

int countdown (int n); // function prototypes work

int main() {
   cout << countdown(10) << endl;
   return 0;
}

int countdown (int n) {
   while (n>0) {
      cout << n << endl; // need to understand this code better
      n=n-1;
   }
   cout << "Blastoff!" << endl;
   return 0;
}

