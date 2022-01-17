#include<stdlib.h>

#include<stdio.h>
struct node{
  int data;
  struct node *next;
}*head;
void create(int n);
void inshartfast(int data);
void inshartLast(int data);
void inshartAny(int data,int pos);
void display();
int main(){
int n,data,pos;
printf("\n Enter the number of data ::" );
scanf("%d",&n );
create(n);
printf("\n Show the data::" );
display();
printf("\n .......................link list create successfull.................................... " );
printf("\n Enter the number to inshartfast::" );
scanf("%d",&data );
printf("\n Show the data::" );
inshartfast(data);
display();
printf("\n...........................inshartfast successfull........................................." );
printf("\n Enter the number to inshartLast::" );
scanf("%d",&data );
printf("\n Show the data::" );
inshartLast(data);
display();
printf("\n...........................inshartLast successfull....................................");
printf("\n Enter the number to inshartAny::" );
scanf("%d",&data );
printf("\n Enter the position to inshartAny" );
scanf("%d",&pos );
inshartAny(data,pos);
display();
printf("\n..............................inshartAny successfull......................................" );
return 0;
}
void create(int n){
  int i,data;
  struct node *temp,*newnode;
  head=(struct node*)malloc(sizeof(struct node));
  if (head==NULL) {
    printf("\n can note create " );
  }
    printf("\n Enter the data 1:" );
    scanf("%d",&data );
    head->data=data;
    head->next=NULL;
    temp=head;
    for (i=2;i<=n; i++) {
      printf("\n Enter the data :%d",i );
      scanf("%d",&data );
      newnode=(struct node *)malloc(sizeof(struct node));
      if (newnode==NULL) {
        printf("\n note create" );
        exit(0);
        /* code */
      }
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;



  }
}
void display() {
  struct node *temp;
  if(head==NULL){
    printf("\n empty" );
  }else{
  temp=head;
  while (temp!=NULL) {
    printf("%d\t ",temp->data );
    temp=temp->next;
    /* code */
  }
  }
  /* code */
}



void inshartfast(int data){
  struct node *newnode;
  if (head==NULL) {
    printf("\n empty list:" );
  }
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=head;
  head=newnode;
}
// ..............................................................................

void inshartLast(int data) {
  struct node *newnode;
  struct node *temp=head;
  while (temp->next!=NULL) {
    temp=temp->next;
    /* code */
  }
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  // temp=temp->next;
  temp->next=newnode;


  temp=newnode;
  /* code */
}
void inshartAny(int data,int pos){
  int i;
  struct node *temp=head;
  struct node*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  for ( i = 1; i < pos-1; i++) {
    temp=temp->next;
  }
  newnode->data=data;
  newnode->next=temp->next;
  temp->next=newnode;
}
