#include <stdio.h>

char *month_name(int n);

int main(void) {
    char *monthp = month_name(2);
    for(;*monthp != '\0';monthp++) {
        printf("%c", *monthp);
    }
}

char *month_name(int n) {
    static char *name[] = {
        "Illegal month",
        "January","February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n <1 || n> 12) ? name[0] : name[n];
}