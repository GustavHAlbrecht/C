#include <stdio.h>

#define INTEGER16BIT 65536 //Representation: Two Complements - Range: -32768 to 32767
#define INTEGER32BIT 4294967296 //Representation: Two Complements - Range: -2147483648 to 2147483647
#define UINTEGER32BIT 4294967296 //Range: 0 to 4294967295

#define CHARACTER 255;

int integer(void);
int character(void);

int main(void){
    integer();
    character();
}

int integer(void){
    int integer = INTEGER16BIT;
    if(integer == 0){
        printf("Your system allocates 16 bits to an integer\n");
    }
    integer = INTEGER32BIT;
    if(integer == 0){
        printf("Your system allocated 32 bits to an integer\n");
    }
    unsigned int unsignedInteger = INTEGER32BIT;
    if(unsignedInteger=='0'){
        printf("Your system allocated 32 bits to an unsigned integer\n");
    }
    return 0;

}

int character(void){
    char character = CHARACTER;
    printf("%c is the ASCII chracter at decimal position 64 because char is allocated 8 bit by your system\n", character+65);
}



