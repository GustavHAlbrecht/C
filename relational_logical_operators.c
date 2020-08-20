#include <stdio.h>

int common_divisor(int x, int y);


int main(void){
    int x,y;
    x=10;
    y=4;
    common_divisor(x,y);
    unary_operator(x,y);
}

int common_divisor(int x, int y){
    int smallerValue;
    if(x<=y){
        smallerValue = x;
    }
    else{
        smallerValue = y;
    }
    for(int i = 2; i<smallerValue;i++){
        if((x%i == 0) && (y%i == 0)){
            printf("%d is a common divisor of %d and %d \n", i,x,y);
        }
    }
    return 0;

}

int unary_operator(int x, int y){
    if(x){
        printf("%d boolean value is true\n", x);
    }
    x=0;

    if(!x){
        printf("%d boolean value is false\n", x);
    }

    if(x && y){
        printf("Both %d and %d boolean values are true",x,y);
    }

    if(x || y){
        printf("Either %d or %d booleans value is true or both are true", x,y);
    }
    return 0;
}