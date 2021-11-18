#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COUNT 4
int main(int argc, char **argv)
{
   int *p;
   int a[COUNT];
   printf("size of an 'int' is %d\n", sizeof(int));
   
   for(int i=0; i < COUNT; i++) a[i] = i;
   
   p = a;
   printf("address of a is %p^; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);
   
    p = p+1;
   printf("address of a is %p^; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);
   
      p = p+2;
   printf("address of a is %p^; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);
   
      p = p+1;
   printf("address of a is %p^; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);
	return 0;
}
 