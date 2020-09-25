#include <stdio.h>

int atoi(char []);
char to_lower(char);
void char_int(void);

int main(void) {
    char digits[] = "31245";
    printf("%d",atoi(digits));

    char c= 'A';
    printf("%c",to_lower(c));

    char_int();
 


}

//Transform a string of digits into the decimal number
int atoi(char s[]) {
    int i,n;

    n=0;
    for(i=0; s[i] >= '0' && s[i] <= '9';i++) {
        n = 10 *n + (s[i]-'0');
    }
    return n;
}

char to_lower(char c) {
    if(c>= 'A' && c<= 'Z') {
        return c + 'a' -'A';
    }
    else {
        return c;
    }
}

void char_int(void) {
    int i = 1024*16+64;
    char d = i; //Variable i of type int(16 or 32 bit) gets truncated to fit 8 bit type char 

    printf("%d",d); //==64 because of truncation
}
