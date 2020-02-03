#include <cctype>
using namespace std;
#include "Tools.h"
namespace sdds{
   void toLowerCaseAndAlphabeticCopy(char des[], const char source[]) {
      int i = 0, j = 0;
      char lower;
      for (; source[i] != 0;i++) {
         lower = tolower(source[i]);
         if (lower>='a' && lower <='z') {
            des[j++] = tolower(source[i]);
         }
      }
      des[j] = 0;
   }
}