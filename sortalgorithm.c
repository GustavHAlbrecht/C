#include <stdio.h>

#define ARRAYLENGTH 10

int sort_lowest_first(int array[]);

int main(void){
    int array[] = {10,9,8,2,23,12,99,102,1231,0};
    sort_lowest_first(array);
    for(int i = 0;i<ARRAYLENGTH;i++){
        printf("%3d ",array[i]);
    }
    return 0;
}

//Complexity: O(n^2)
int sort_lowest_first(int array[]){
    int current;
    int next;
    for(int c = 0; c<ARRAYLENGTH;c++){
        for(int i = 0;i<ARRAYLENGTH;i++ ){
            current = array[i];
            next = array[i+1];

            if(current< next){
                ;
            }
            else{
                array[i] = next;
                array[i+1] = current;
            }
        }
    }
    return 0;

}


    


