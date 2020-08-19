#include <stdio.h>

#define LOWER 0
#define UPPER 1000
#define EPSILON 0.1

float bisection_search(float lower,float upper, float epsilon,float squareRoot);
float absolute_value(float value);

int main(void){
    float answer;
    double squareRoot = 12313;
    answer = bisection_search(LOWER,UPPER,EPSILON,squareRoot);
    printf("%f", answer);
    return 0;
}

float bisection_search(float lower, float upper, float epsilon,float squareRoot){
    int counter = 0;
    float answer = (lower+upper)/2;
    float error = squareRoot- answer*answer;
    while(absolute_value(error)>epsilon){
        
        if(error>0){
            lower = answer;
            answer = (answer + upper)/2;
        }
        if(error<0){
            upper = answer;
            answer = (answer + lower)/2;
        }
        error = squareRoot- answer*answer;
    }
    return answer;
}

float absolute_value(float value){
    if(value > 0){
        return value;
    }
    if(value<0){
        return -value;
    }
}