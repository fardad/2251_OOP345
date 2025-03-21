#include <iostream>
#include <deque>
using namespace std;
int main( ) {
   cout << "08 - Feb 06, OOP345NBB" << endl;
   std::deque<double> prices( 3, 10.50 ), costs;
   for ( int i = 0; i < prices.size( ); i++ )
      std::cout << prices[i] << "  ";
   cout << endl;
   prices.back( ) = 32.43; // reset last
   prices.pop_front( );    // remove first
   for ( int i = 0; i < prices.size( ); i++ )
      std::cout << prices[i] << "  ";
   std::cout << std::endl;
   costs = prices;
   costs.push_front( 5.64 );  // add 5.64
   costs.push_front( 20.31 ); // add 20.31
   costs.at( 1 ) += 10.0;     // add 10.0
   for ( int i = 0; i < costs.size( ); i++ )
      std::cout << costs[i] << "  ";
   std::cout << std::endl;
   return 0;
}