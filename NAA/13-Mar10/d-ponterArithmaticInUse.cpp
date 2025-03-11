#include <iostream>
using namespace std;
void StrCpy(char* des, const char* src) {
   while (*des++ = *src++); // on g++ this will not be allowed without a warning
}
unsigned length(const char* s) {
   unsigned len = 0u;
   while (*s++) len++;
   return len;
}

int main() {
   char src[] = "Fred000000";
   char des[51];
   StrCpy(des, src);
   cout << des << endl;
   cout << length(src) << endl;
   return 0;
}