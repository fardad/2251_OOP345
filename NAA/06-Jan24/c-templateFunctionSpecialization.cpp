#include <iostream>
#include <cstring>
using namespace std;

struct Container {
   int value;
   bool hasMore( const Container& );
};


template <typename T>
T largest( T a, T b ) {
   return a > b ? a : b;
}

template <>
const char* largest<const char*>( const char* a, const char* b ) {
   return strcmp( a, b ) > 0 ? a : b;
}


template <>
Container largest<Container>( Container C1, Container C2 ) {
   return C1.hasMore( C2 ) ? C1 : C2;
}


int main( ) {
   Container A, B, C;
   C = largest( B, C );
   return 0;
}