#include<stdio.h>
#define MAX 6
int top=-1;
int stack[MAX];
void push();
void pop();
void display();
int main(){
  int ch,n;
  do {
    printf("\n Enter 1 for push:" );
    printf("\n Enter 2 for pop:" );
    printf("\n Enetr 3 for display:" );
    printf("\n Enetr 0 for exit" );
    printf("\n Enter your choice" );
    scanf("%d",&ch );
    switch (ch) {
      case /* value */1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      case 0:exit(1);
      break;
      default:printf("\n your choice is wrong:" );
    }
    /* code */
  } while(ch!=0);
}
void push(){
  int n;
if(top==(MAX-1)){
     printf("\n stack is overflow");
     }else{
         printf("\n \n Enter the data to inshart" );
  scanf("%d",&n );
  top=top+1;
  stack[top]=n;
}


}
void pop(){
  if(top==-1){
    printf("\n stack is empty");
  }else{
    printf("\n poped element is %d",stack[top] );
    top=top-1;
  }
}
void display(){
  int i;
  if(top==-1){
    printf("\n stack is empty" );
  }else{
    for(i=top;i>=0;i--){
      printf("%d",stack[i] );
    }
  }
}
