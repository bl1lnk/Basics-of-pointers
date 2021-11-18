#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char* s;
  int stringsize;
  
  stringsize = sizeof("hello");
  printf("size of 'hello' is %d\n", stringsize);
  
  s = (char*)malloc(stringsize);
  
  s = (char*)malloc(stringsize);
  if(s == NULL){
      printf("malloc failed! \n");
      exit(0);
  }
  
  strncpy(s, "hello", stringsize);
  
  printf("s is %s\n",s);
  s[0] = 'c';
  printf("s is now %s\n",s);
  printf("s is now %c \n", *(s+1));

	return 0;
}
 