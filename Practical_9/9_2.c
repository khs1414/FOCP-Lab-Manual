#include <stdio.h>
int main(){
   int A[10][10];
   int transpose[10][10];
   int m, n, i, j;
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the A\n");
   for (i= 0; i < m; i++){
      for (j = 0; j < n; j++){
         scanf("%d", &A[i][j]);
      }
   }
   for (i = 0;i < m;i++){
      for (j = 0; j < n; j++){
         transpose[j][i] = A[i][j];
      }
   }

   printf("Matrix A:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++){
         printf("%d\t", A[i][j]);
      }
      printf("\n");
   }

   printf("Transpose of the A:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++){
         printf("%d\t", transpose[i][j]);
      }
      printf("\n");
   }
   return 0;
}