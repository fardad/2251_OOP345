#include <iostream>
#include <vector>
using namespace std;
int main( ) {
   cout << "08 - Feb 06, OOP345NBB" << endl;
   std::vector<double> prices;  // initially empty
   std::vector<int> nums;
   prices.push_back( 10.43 ); // add 10.43
   prices.push_back( 20.54 ); // add 20.54
   prices.push_back( 32.43 ); // add 32.43
   nums.push_back( 10 );
   nums.push_back( 20 );
   for ( auto i = prices.begin( ); i != prices.end( ); i++ )
      std::cout << *i << "  ";
   std::cout << std::endl;
   for ( auto i = nums.begin( ); i != nums.end( ); i++ )
      std::cout << *i << "  ";
   std::cout << std::endl;
   return 0;
}