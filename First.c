#include <stdio.h>
int main(void) {
int a[3][3],b[3][3],c[3][3],sum[3][3],i,j,k;
float I[3][3];
printf("\nEnter elements of 1st matrix:\n");
  for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j) 
      {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
      }
    }
   printf("Enter elements of 2nd matrix:\n");
  for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j) 
      {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    
    }
  }

//printing matrices
printf("First matrix: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf(" %d ",a[i][j]);
}
printf("\n");

}
printf("Second matrix: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf(" %d ",b[i][j]);
}
printf("\n");

}
// printing the result
for (int i=0;i<3;i++)
{
  for (int j=0;j<3;j++)
    sum[i][j]=a[i][j]+b[i][j];
}

printf("\nSum of two matrices: \n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++) {
      printf("%d   ", sum[i][j]);
      }
      printf("\n");}

//adjoint of matrix
printf("adjoint of a matrix\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       c[i][j]=a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3];
       printf("%d ",c[i][j]);
    }

    printf("\n");
}
//determinant
float determinant;

determinant= a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
printf("determinant of matrix a");
printf("\n");
printf("%f",determinant);
printf("\n");


//inverse of matrix
printf("inverse of matix c");
printf("\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       I[i][j]=(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3])/determinant;
       printf("%f ",I[i][j]);
    }

    printf("\n");
}



  }








