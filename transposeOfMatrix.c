#include<stdio.h>

int main(){
    int A[3][4],B[4][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enetr the element of A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Before Transpose: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            
            B[i][j]=A[j][i];
        }
    }
    printf("After Transpose: \n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
return 0;



}