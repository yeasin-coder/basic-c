#include<stdio.h>

int main(){
        int sum, range;
        printf("Please enter the range: ");
        scanf("%d", &range);

     if (range % 2 == 0){
        sum = (1 + range) * (range / 2);
     }else{
        sum = 1 + ((2 + (range-1)) * ((range-1)/2));
     }
     
     printf("The sum of 1 to %d = %d\n", range, sum);
        return 0;
}