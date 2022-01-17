#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
}*head;
void display();
void deletAny();
void create(int n);
int main(){
  int n,pos;
  printf("\n Enter the number of nodes:" );
  scanf("%d",&n );
  create(n);
  printf("\n show the list :" );
  display();
  printf("\n..................................................." );
  printf("\n Enter the position" );
  scanf("%d",&pos );
  deletAny();
  printf("\n show the list:" );
  display();
  return 0;
}
void create(int n){
  int data,i;
  struct node *temp,*newnode;
  head=(struct node *)malloc(sizeof(struct node));
  if (head==NULL) {
    printf("\n list cannote created:" );
    /* code */
  }
  printf("\n Enter the value of node 1:" );
  scanf("%d",&data );
  head->data=data;
  head->next=NULL;
  temp=head;
  for(i=2;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("\n Enter the data of %d:",i );
    scanf("%d",&data );
    newnode->data=data;
    newnode->next=NULL;
temp->next=newnode;
    temp=temp->next;

  }

}

void display(){
  struct node *temp;
  if(temp==NULL){
    printf("\n Empty list:" );
  }else{
    temp=head;
    while (temp!=NULL) {
      printf("%d\n", temp->data);
      temp=temp->next;
      /* code */
    }
  }
}
void deletAny(int pos){
  struct node *prev=head;
  struct node *temp=head->next;
  for(int i=1;i<pos-1;i++){

      temp=temp->next;
      prev=prev->next;
}
    prev->next=temp->next;
    free(temp);


}
