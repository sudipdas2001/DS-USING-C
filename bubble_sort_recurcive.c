#include<stdio.h>
void  bubble(int a[10],int end){
  if(end==0){
    return;
  }
  for(int i=0;i<end;i++){
    if (a[i]>a[i+1]) {
      int t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
     bubble(a,end-1);
  }
}
int main()
{
    int a[] = {3, 6, 2, 4, 1};
    bubble(a, 4);//bubble(a,n-1)
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
