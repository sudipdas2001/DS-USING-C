#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  int pow;
  struct node *next;
};
struct node *create(struct node *, int);
struct node *addtwo(struct node *, struct node *, struct node *);
void display(struct node *);
int main()
{
  struct node *head1 = NULL, *head2 = NULL, *head3 = NULL;
  int n;
  printf("\n Enter the polinomial");
  scanf("%d", &n);
  head1 = create(head1, n);
  printf("\n show the polinomial:");
  display(head1);
  printf("\n Enter the polinomial:");
  scanf("%d", &n);
  head2 = create(head2, n);
  printf("\n show the polinomial:");
  display(head2);
  head3 = addtwo(head1, head2, head3);
  printf("\n show addition:");
  display(head3);
  return 0;
}
struct node *create(struct node *head, int n)
{
  struct node *temp, *newnode;
  int data, pow, i;
  head = (struct node *)malloc(sizeof(struct node));
  printf("\n Enter the data:");
  scanf("%d", &data);
  printf("\n Enter the power:");
  scanf("%d", &pow);
  head->data = data;
  head->next = NULL;
  head->pow = pow;
  temp = head;
  for (i = 2; i <= n; i++)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\n enter the data: ");
    scanf("%d", &data);
    printf("\n Enter the power:");
    scanf("%d", &pow);
    newnode->data = data;
    newnode->pow = pow;
    newnode->next = NULL;
    temp->next = newnode;
    temp = temp->next;
  }
  return head;
}

void display(struct node *head)
{

  struct node *temp;
  if (head == NULL)
  {
    printf("\n Empty");
  }
  else
  {
    temp = head;
    while (temp != NULL)
    {
      printf("%dx^%d", temp->data, temp->pow);
      temp = temp->next;
      if (temp != NULL)
      {
        printf("+");
        /* code */
      }
      else
      {
        printf("\n");
      }
    }
  }
}
struct node *addtwo(struct node *head1, struct node *head2, struct node *head3)
{
  struct node *p1 = head1;
  struct node *p2 = head2;

  head3 = (struct node *)malloc(sizeof(struct node));
  struct node *p3 = head3;

  while (p1 != NULL && p2 != NULL)
  {
    if (p1->pow < p2->pow)
    {
      p3->data = p2->data;
      p3->pow = p2->pow;
      p2 = p2->next;
    }
    else if (p1->pow > p2->pow)
    {

      p3->data = p1->data;
      p3->pow = p1->pow;
      p1 = p1->next;
    }

    else
    {

      p3->data = p1->data + p2->data;
      p3->pow = p1->pow;
      // p3->next=p1;
      p1 = p1->next;
      p2 = p2->next;
    }
    p3 = p3->next;
  }
  while (p1 != NULL)
  {
    p3->next = p1;
    p3->data = p1->data;
    p3->pow = p1->pow;
    p1 = p1->next;
    /* code */
  }
  while (p2 != NULL)
  {
    // p3->next = p2;
    p3->data = p2->data;
    p3->pow = p2->pow;
    p2 = p2->next;
    /* code */
  }
  return head3;
}
