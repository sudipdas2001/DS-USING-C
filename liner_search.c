#include<stdio.h>

int main(){
  int n,i,a[10],search,f=0;
  printf("\n Enter  the element" );
  scanf("%d",&n );
  printf("\n Enter the how many element:" );
  for(i=0;i<n;i++){
    scanf("%d",&a[i] );
  }
  printf("\n Enetr the search element:" );
  scanf("%d",&search );
  for(i=0;i<n;i++){
    if(a[i]==search){
      f=1;
      break;
      // printf("\n Element is found:" );
    }
  }
  if(f==0){
    printf("\n Element is note found" );
  }else{
    printf("\n Element is found" );
  }
  return 0;
}
