#include <iostream>
using namespace std;
void faa( );
void foo( );
int main( ) {
   cout << "OOP345NBB Jan 21" << endl;
   foo( );
   cout << "end of foo" << endl;
   for ( int i = 0; i < 10; i++ ) {
      faa( );
   }
   cout << endl;
   return 0;
}

void faa( ) {
   static int s = 0;
   cout << s << " ";
   s++;
}

void foo( ) {
   int a = 10;
   while ( a-- ) {
      cout << a << " ";
   }
   cout << endl;
}