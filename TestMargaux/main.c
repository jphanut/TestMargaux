#include <stdio.h>
#include <stdlib.h>

int getValuerAbsulue(signed int i);

int main()
{
    int test = getValuerAbsulue(2);
    printf("Valeur est %d\n", test);
    return 0;
}

int getValuerAbsulue(signed int i) {
   if ( i < 0 )
   {
      return -1*i;
   }
   return i;
}
