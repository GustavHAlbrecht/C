#include <stdio.h>

#define MAXLINE 1000

int print_input(void);
long count_characters(void);
long count_lines(void);
int count_numbers(int array[]);

int longest_line(void);
int getline(char line[], int maxline);
void copy(char to [], char from[]);

int main(void) {
    // Press Enter to process input stream in command line(note: this inserts a newline character)
    //Press Ctrl + C to stop input stream

    //print_input();
    //count_characters();
    //count_lines();

    //int array[10];
    //count_numbers(array);

    longest_line();
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



int longest_line() {
    int len; //current line length
    int max; //maximum length seen so far
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getline(line,MAXLINE))>0) {
        if(len>max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max>0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim) {
    int c,i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    {
        s[i]=c;
    }
    if(c=='\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}
