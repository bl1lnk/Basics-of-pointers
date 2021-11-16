#include <stdio.h>

#define LENGTH 3

char* words[LENGTH];    //some strings

int main(int argc, char **argv)
{
    char *pc;
    char **ppc;

    printf("multiple indirection exmple\n");

    // initialize our string array

    words[0] = "zero";
    words[1] ="one";
    words[2] = "two";

    for(int i =0; i < LENGTH; i++){
        printf("%s\n", words[i]);
    }

    /*
    * B: a pointer to an array of strings
    *  - the same as a pointer to a pointer to a character
    */

    printf("\n Now print the chars in each string ... \n");
    ppc= words;
    for (int i = 0; i < LENGTH; i++){
        ppc = words +i ;
        pc = *ppc;
        while(*pc != 0){
            printf("%c " , *pc);
            pc +=1;
        }

        printf("\n");
    }
    return 0;
}