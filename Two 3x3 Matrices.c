#include <stdio.h>

int main(){
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{9,8,7},{6,5,4},{3,2,1}};

    printf("matrix 1: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
printf("\n");

    printf("matrix 2: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matrix2[i][j]);

        }printf("\n");
    }

return 0;
}
