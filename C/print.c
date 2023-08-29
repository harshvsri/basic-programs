#include<stdio.h>
int main(void) {
    int arr[3][10];
    
    int num1 = 3;
    int num2 = 7;
    int num3 = 9;
    
    for(int j=0; j<10; j++) {
    
        arr[0][j] = (j+1)*num1;
        //arr[0][j] *= 3;
        arr[1][j] = (j+1)*num2;
        arr[2][j] = (j+1)*num3;
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<10; j++) {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }
    
    

}