#include <stdio.h>

int bitwise_and(int a, int b);
int inclusive_or(int a, int b);
int exclusive_or(int a, int b);
int left_shift(int a, int n);
int right_shift(int a, int n);
int unary(int a);

int main(void) {
    int a = 64; // int 64 represented as 32 bits: 00000000 00000000 00000000 01000000
    int b = 65; // int 64 represented as 32 bits: 00000000 00000000 00000000 01000001
    bitwise_and(a,b);

    int c = 65;
    int d = 66;
    inclusive_or(c,d);
    exclusive_or(c,d);

    int e = 4;
    int f = 64;
    left_shift(e,2);
    right_shift(e,2);
    unary(0);
}

int bitwise_and(int a, int b) {
    int c = a&b;
    printf("bitwise AND operator with operand %d and %d gives %d \n",a,b,c+2);
}

int inclusive_or(int a,int b) {
    int c = a|b;
    printf("bitwise inclusive OR operator with operand %d and %d gives %d \n",a,b,c);
}

int exclusive_or(int a, int b) {
    int c = a^b;
    printf("bitwise exclusive OR operator with operand %d and %d gives %d \n",a,b,c);
}

int left_shift(int a,int n) {
    int result = a <<n;
    printf("bitwise left shift operator with operand %d and %d number of shifts gives %d \n",a,n,result);
}
int right_shift(int a, int n) {
    int result = a>>n;
    printf("bitwise right shift operator with operand %d and %d number of shifts gives %d\n",a,n,result);
}
int unary(int a) {
    int result = ~a;
    printf("The ones complement (unary) of %d is %d",a,result);
}