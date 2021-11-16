#include <stdio.h>

#define LENGTH 3

int data[LENGTH];    //some integers

int main(int argc, char **argv)
{
   int *pi;      // a simple pointer to an integer
   int **ppi;    // a pointer to a pointer to an integer

   printf("multiple indirection example \n");
   
   for (int i= 0; i < LENGTH; i++){
       data[i] = i;
   }
   
   for(int i =0; i < LENGTH; i++){
       printf("%d\n", data[i]);
   }

/*
* A: simple pointer a pointer to an integer
*
*
*/

pi = data;
ppi = &pi;

for (int i=0; i < LENGTH; i++){
    printf("\n Loop[%d] array address is %p \n", i, data);
    printf("item pointed to by pi is %d\n", *pi);
    printf("item pointed to by ppi is %p \n", *ppi);
    printf("item pointed to by doubl indirection of ppi is %d\n\n", **ppi);
    printf("The address of pi is %p and the value of pi ( what it points to ) is %p \n\n", &pi, ppi);

    pi +=i;
}
    return 0;
}