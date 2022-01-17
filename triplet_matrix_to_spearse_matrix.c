// triplet matrix to spearse maetrix conversion/





#include<stdio.h>
int main(){
  int n,m,i,j,a[10][10],row,collums,value,k,s;
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
  printf("\n Enter the value of s:" );
  scanf("%d",&s );
for(k=0;k<s;k++){
  printf("\n Enter the rows value;" );
  scanf("%d",&row );
  printf("\n Enetr the collums value:" );
  scanf("%d",&collums );
  printf("\n Enter the value:" );
  scanf("%d",&value );
  a[row][collums]=value;
}





  printf("\n show the matrix element:" );
  for (i = 0; i < m; i++) {
    for(j=0;j<n;j++){
      printf("%4d",a[i][j] );
    }
    printf("\n");
    /* code */
  }
}
