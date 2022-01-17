#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
};
struct node *create_list(struct node *);
struct node *concat( struct node *start1,struct node *start2);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start,int data);
void display(struct node *start);

int main()
{
        struct node *start1=NULL,*start2=NULL;
        start1=create_list(start1);
        start2=create_list(start2);
        printf("\nFirst list is  : ");
        display(start1);
        printf("\nSecond list is  : ");
        display(start2);
        start1=concat(start1, start2);
        printf("\nConcatenated list is  : ");
        display(start1);

        return 0;

}

struct node *concat( struct node *start1,struct node *start2)
{
  struct node *p1=start1;
  struct node *p2=start2;
  struct node *dum;
  dum=(struct node *)malloc(sizeof(struct node));
  struct node *p3=dum;
        while (p1!=NULL && p2!=NULL) {


          if(p1->info<p2->info){
            p3->link=p1;
            p1=p1->link;
          }else{
            p3->link=p2;
            p2=p2->link;
          }
          p3=p3->link;
          /* code */
        }
        while (p1!=NULL) {
          p3->link=p1;
          p1=p1->link;
          p3=p3->link;
          /* code */
        }
        while (p2!=NULL) {
          p3->link=p2;
          p2=p2->link;
          p3=p3->link;
          /* code */
        }
        return dum->link;
}
struct node *create_list(struct node *start)
{
        int i,n,data;
        printf("\nEnter the number of nodes : ");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;

        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        start=addatbeg(start,data);

        for(i=2;i<=n;i++)
        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                start=addatend(start,data);
        }
        return start;
}

void display(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p=start;
        while(p!=NULL)
        {
                printf("%d ", p->info);
                p=p->link;
        }
        printf("\n");
}/*End of display() */

struct node *addatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
}

struct node *addatend(struct node *start, int data)
{
        struct node *p=start,*tmp;


        while(p->link!=NULL)
                p=p->link;
        tmp= (struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        p->link=tmp;
        tmp->link=NULL;
        return start;
}
