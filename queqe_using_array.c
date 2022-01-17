#include<stdio.h>
#include<stdlib.h>
struct node{
int co;
int expo;
}p1[10],p2[10];
int create(struct node []);
void displa(struct node[],int terms);
int main(){
    int t1,t2;
    t1=create(p1);
    printf("\n 1st polinomial:")
    displa(p1,t1);

return 0;
}
int create(struct node p[10]){

int t,i;
printf("\n Enter the total number of polinomial:");
scanf("%d",&t1);
for(i=0;i<t;i++){
    printf("\ Enter the co");
    scanf("%d",&p[i].co);
    printf("\n Enetr expo");
    scanf("%d",&p[i].expo);
}
return(t);
}
void displa(struct node p[10],int item){
int k;
for(k=0;k<item;k++)
    printf("%d(x^%d)+",p[k].co,p[k].expo);
}
