#include <iostream>
using namespace std;
class Name {
   char m_name[41];
   static void strcpy( char* des, const char* src ) {
      int i{};
      for (i = 0; src[i]; des[i] = src[i++] );
      des[i] = char( 0 );
   }
public:
   Name( const char* name ) {
      strcpy( m_name, name );
   }

};


int main( ) {

   return 0;
}