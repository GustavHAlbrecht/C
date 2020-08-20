#include <stdio.h>
#include <string.h>

char string[] =  "Hallo Welt"; //Datatype: array with elements of type char
int strlength(void);

int main(void){
    printf("String length: %d",strlength());
}

int strlength(void){
    extern char string[];
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    if(i == strlen(string)){
        printf("Correct Implementation\n");
    }
    return i;
}
