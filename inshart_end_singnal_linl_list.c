#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
// struct node *inshartEnd(struct node *,int );
struct node *inshartfast(struct node *,int);
struct node *inshartLast(struct node *,int );
void display(struct node *);
int main(){
 struct node *head=NULL;
  int data;
  printf("\n Enetr the number of data to inshart:" );
  scanf("%d",&data );
  head=inshartfast(head,data);
  printf("\n display the list" );
  display(head);
  printf("\n Enter the data to inshart last;" );
  scanf("%d",&data );
  head=inshartLast(head,data);
  printf("\n display" );
  display(head);

  return 0;
}
void display(struct node *head){
  struct node *temp;
  if(head==NULL){
    printf("\n the list is empty"  );
  }else{
    temp=head;
    while (temp!=NULL) {
      printf("%d",temp->data );
      temp=temp->next;
      /* code */
    }
  }
}
struct node * inshartfast(struct node *head,int data){
  struct node *newnode;

  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=head;
  head=newnode;
  return head;
}
struct node *inshartLast(struct node *head,int data){
  struct node *temp=head;
  struct node *newnode;
  while (temp->next!=NULL) {
    temp=temp->next;
    /* code */
  }
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  temp->next=newnode;
  temp=newnode;
}
