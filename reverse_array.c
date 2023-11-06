#include<stdio.h>

int main(){

        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        int i, j, temp;
        j = 9;
        for(i = 0; i < 4; i++){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
        }

        //print the array
        for(i = 0; i < 10; i++){
                printf("%d\n", arr[i]);
        }
        return 0;
}
