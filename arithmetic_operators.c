#include <stdio.h>


int addition(int x, int y);
int substraction(int x, int y);
int multiplication(int x,int y);
int division(int x, int y);
int modulo(int x, int y);


int main(void){
    int x,y;
    x = y = 3;

    printf("%d \n",addition(x,y));
    printf("%d \n",substraction(x,y));
    printf("%d \n", multiplication(x,y));
    printf("%d \n", division(x,y) );

    x=40;
    y=10;

    printf("%d \n", modulo(x,y));

    return 0;
}

int addition(int x, int y){
    return x+y;
}

int substraction(int x, int y){
    return x-y;
}

int multiplication(int x, int y){
    return x*y;
}

int division(int x, int y){
    return x/y;
}

int modulo(int x, int y){
    return x%y;
}

