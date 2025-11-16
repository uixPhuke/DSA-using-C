#include<stdio.h>

int main(){
    int A[3][4],R[3],C[4],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enetr the element of A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Before Transpose: \n");
    for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<4;j++){
            
            sum=sum+A[i][j];
        }
        R[i]=sum;
    }
    for(i=0;i<4;i++){
        int sum=0;
        for(j=0;j<3;j++){
            
            
            sum=sum+A[j][i];
        }
        C[i]=sum;
    }
    printf("The Row Wise Sum\n");
    for(i=0;i<3;i++){
        
            printf("Sum of Row: %d is %d\n",i+1,R[i]);
       
    }
    printf("The Column Wise Sum\n");
    for(j=0;j<4;j++){
        
            printf("Sum of Column is : %d is %d\n",j+1,C[j]);
       
    }
return 0;



}