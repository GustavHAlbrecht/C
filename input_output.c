#include <stdio.h>

int print_input(void);
long count_characters(void);
long count_lines(void);
int count_numbers(int array[]);

int main(void) {
    // Press Enter to process input stream in command line(note: this inserts a newline character)
    //Press Ctrl + C to stop input stream

    //print_input();
    //count_characters();
    //count_lines();

    int array[10];
    count_numbers(array);
}

int print_input() {
    int c;
    while((c= getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}

long count_characters() {
    int c;
    long nc =0;
    while((c= getchar()) != EOF) {
        nc++;
    }
    printf("Anzahl der Charakter %ld",nc);
    return nc;
}

long count_lines() {
    int c;
    long nl = 0;
    while((c= getchar()) != EOF) {
        if(c=='\n'){
            nl++;
        }
    }
    printf("Anzahl der Zeilen %ld",nl);
    return nl;
}

int count_numbers(int array[]) {
    int c;
    int TOTALNUMBERS = 10;
    int i;

    for(i = 0; i<TOTALNUMBERS;i++) {
        array[i] = 0;
    }

    while((c= getchar()) != EOF) {
        if(c>= '0' && c<= '9'){
            array[c-'0']++;
        }
    }
    return 0;
}
