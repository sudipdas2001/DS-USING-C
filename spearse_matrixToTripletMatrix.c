#include<stdio.h>
int main(){
  int n,m,i,j,a[10][10],size=0,k=0,com[10][10];
  printf("\n Enter the number of row and collums:" );
  scanf("%d%d",&m,&n );

  printf("\n Enter the matrix element:" );
  for (i = 0; i < m; i++) {
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j] );
    }
    /* code */
  }
  printf("\n show the matrix element:" );
  for (i = 0; i < m; i++) {
    for(j=0;j<n;j++){
      printf("%d\t",a[i][j] );
    }
    printf("\n");
    /* code */
  }
  /**/

  for (i = 0; i < m; i++) {
    for(j=0;j<n;j++){
      if (a[i][j]!=0) {
        size++;
      }
    }
    /* code */
  }
  for (i = 0; i < m; i++) {
    for(j=0;j<n;j++){
      if (a[i][j]!=0) {
        com[0][k]=i;
        com[1][k]=j;
        com[2][k]=a[i][j];
        k++;
      }
    }
    /* code */
  }





  printf("\n show the matrix element:" );
  for (i = 0; i < 3; i++) {
    for(j=0;j<size;j++){
      printf("%4d",com[i][j] );
    }
    printf("\n");
    /* code */
  }
}
