#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *push(struct node *);
struct node *pop(struct node *);
void display();
int main(){
struct node *top;
int ch;
top=NULL;
do{
    printf("\n Enter 1 for push:");
    printf("\n Enter 2 for pop");
    printf("\n Enter 3 for display:");
    printf("\n Enter 0 for exit:");
    printf("\n Enetr your choice:");
    scanf("%d",&ch);
    switch(ch){
    case 1:top=push(top);
    break;
    case 2:top=pop(top);
    break;
    case 3:display(top);
    break;
    case 4:exit(0);
    default:printf("\n Enetr your choice is wrong");
    }

}while(ch!=0);
return 0;
}


struct node *push(struct node *top){
struct node *temp;
int item;
printf("\n Enetr the element:");
scanf("%d",&item);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=top;
top=temp;
return (top);
}

struct node *pop(struct node *top){
struct node *temp;
if(top==NULL){
    printf("\n stack is empty:");
}else{
temp=top;
printf("\n Enter poped element %d",temp->data);
top=top->next;
free(temp);
}
return (top);
}
void display(struct node *top){

struct node *p;
p=top;
if(top==NULL){
    printf("\n stack is empty:");
}else{
while(p!=NULL){
    printf("%d",p->data);
    p=p->next;
}

}
}
