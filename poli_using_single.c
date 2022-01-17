#include<stdio.h>
#include<stdlib.h>
struct node{
int coeff;
int expo;
struct node *link;
};
void inshart(struct node *,int ,int);
void create(struct node *);
void display(struct node *);
int main(){

struct node *head=NULL;
printf("\n Enter the number of polinomaal");
create(head);

return 0;
}
void inshart(struct node *head,int co,int ex){
struct node *newnode;
struct node *temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->coeff=co;
newnode->expo=ex;
newnode->link=NULL;
if(head==NULL || ex>head->expo){
    newnode->link=head;
    head=newnode;
}else{
temp=head;
while(temp->link!=NULL && temp->link->expo>=ex)
    temp=temp->link;
newnode->link=temp->link;
temp->link=newnode;
}

}

void create(struct node *head){
int n,i;
int coeff;
int expo;
printf("\n Entre the number of polinomial:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\n Enter the cofficent");
    scanf("%d",&coeff);
    printf("\n Enter the expo");
    scanf("%d",&expo);
    inshart(head,coeff,expo);
}

}
void display(struct node *head){

struct node *temp;
temp=head;
while(temp!=NULL){
    printf("%dx^%d",temp->coeff,temp->expo);
    temp=temp->link;

}
}

