#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;

}*head;
void create(int n);
void display();
void deletfast();
int main(){
  int n,i;
  printf("\n Enter the number of list:" );
  scanf("%d",&n );
  create(n);
  printf("\n show the list" );
  display();
  deletfast();
  display();
  return 0;
}
void create(int n) {
  int i,data;
  struct node *temp;
  struct node *newnode;
  head=(struct node *)malloc(sizeof(struct node));
 printf("\n Enter the data of 1" );
 scanf("%d",&data );
  if (head==NULL) {
    printf("\n can note create" );
    /* code */
  }
  head->data=data;
  head->next=NULL;
  temp=head;

for (i = 2; i <= n; i++) {
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\n Enter the data of %d",i );
  scanf("%d",&data );
  newnode->data=data;
  newnode->next=NULL;

  temp->next=newnode;
    temp=temp->next;

  /* code */
}

  /* code */
}
void display(){
  struct node *temp;
  if(head==NULL){
    printf("\n Empty list" );
  }else{
    temp=head;
    while (temp!=NULL) {
      printf("%d",temp->data );
      temp=temp->next;
      /* code */
    }
  }
}


void deletfast(){
  struct node *temp;
  if(head==NULL){
    printf("\n Empty list" );
  }else{
    temp=head;
    head=head->next;
    free(temp);
  }
}
