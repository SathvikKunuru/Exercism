#include "collatz_conjecture.h"
int steps(int start){
    int counter = 0;
    if (start<1) return ERROR_VALUE;
    while (start != 1){
        if (!(start & 1)) {
            //even
            start= start/2;
        }
        else{
            //odd
            start= (3*start) + 1;
        }
        counter++;
    }
    return counter;
}