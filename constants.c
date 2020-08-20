#include <stdio.h>

#define LONG 1234L //Number system: decimal(default). Data type: long(suffix:L)
#define UNSIGNEDINTEGER 1234U //Number system: decimal(default). Data type: unsigned (suffix: U).

#define DOUBLE 624.3 //Number system: decimal(default). Data type: double(default).
#define FLOAT 624.3F //Number system: decimal(default). Data type: float(suffix:F).
 
#define HEXADECIMAL 0xFUL //Number system: hexadecimal(prefix:0x). Data type: unsigned long(suffix: UL).
#define OCTAL 037 //Number system: octial(prefix: 0).Data type: integer(default).

#define CHARACTER 'A'
#define CHARACTEROCTAL '\101' //Number system: octal.
#define CHARACTERHEXADECIMAL '\x41' //Number system: hexadecimal

#define VALUEZERO '\0'


int print_formatted(void);



int main(void){
    print_formatted();
    return 0;
}

int print_formatted(void){
    long longConstant = LONG;
    printf("%ld \n", longConstant);

    unsigned int unsignedInteger = UNSIGNEDINTEGER;
    printf("%u \n", unsignedInteger);

    double doubleConstant = DOUBLE;
    printf("%d \n", doubleConstant);

    float floatConstant = FLOAT;
    printf("%f \n", floatConstant);

    unsigned long integer = HEXADECIMAL*2;
    printf("%lu \n",integer);

    int intgerOctal = OCTAL;
    printf("%d \n", intgerOctal);

    char character = CHARACTER;
    printf(" Character: %c Numerical representation(ASCII): %d  \n", character,character);

    character = CHARACTEROCTAL;
    printf(" Character: %c Numerical representation(ASCII): %d  \n", character,character);

    character = CHARACTERHEXADECIMAL;
    printf(" Character: %c Numerical representation(ASCII): %d  \n", character,character);

    character = VALUEZERO;
     printf(" Character: %c Numerical representation(ASCII): %d  \n", character,character);

    return 0;

}

