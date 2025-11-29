#include "difference_of_squares.h"
#include <stdio.h>
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

unsigned int sum_of_squares(unsigned int number){
    int temp = 0;
    for(unsigned int i=1; i<=number; i++){
        temp+=(i*i);
    }
    // printf("%d",temp);
    return temp;
}

unsigned int square_of_sum(unsigned int number){
    int temp = 0;
    for (unsigned int i=1; i<=number; i++){
        temp += i;
    }
     // printf("%d",temp*temp);
    return temp*temp;
}
