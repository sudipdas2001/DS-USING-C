#include <stdlib.h>

#include <stdio.h>
struct node
{
  int data;
  int pow;
  struct node *next;
};
struct node *create(struct node *, int n);

void display(struct node *);
int main()
{
  int n, data, pos;
  struct node *head1 = NULL;
  struct node *head2 = NULL;
  printf("\n Enter the number of data ::");
  scanf("%d", &n);
  head1 = create(head1, n);
  printf("\n Show the data::");
  display(head1);
  printf("\n Enter the number of data ::");
  scanf("%d", &n);
  head2 = create(head2, n);
  printf("\n Show the data::");
  display(head2);
  // ...................inshartAny successfull......................................");
  return 0;
}
struct node *create(struct node *head, int n)
{
  int i, data, pow;
  struct node *temp, *newnode;
  head = (struct node *)malloc(sizeof(struct node));
  if (head == NULL)
  {
    printf("\n can note create ");
  }
  printf("\n Enter the data 1:");
  scanf("%d", &data);
  printf("\n Enter the pow 1:");
  scanf("%d", &pow);

  head->data = data;
  head->pow = pow;
  head->next = NULL;
  temp = head;
  for (i = 2; i <= n; i++)
  {
    printf("\n Enter the data :%d", i);
    scanf("%d", &data);
    printf("\n Enter the pow :%d", i);
    scanf("%d", &pow);
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
      printf("\n note create");
      exit(0);
      /* code */
    }
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
    printf("\n empty");
  }
  else
  {
    temp = head;
    while (temp != NULL)
    {
      printf("%dx^%d ", temp->data, temp->pow);
      temp = temp->next;
      printf("+");
      /* code */
    }
  }
  /* code */
}
