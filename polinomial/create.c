#include <stdlib.h>

#include <stdio.h>
struct node
{
  int data;
  int pow;
  struct node *next;
} * head;
void create(int n);
void inshartfast(int data);
void inshartLast(int data);
void inshartAny(int data, int pos);
void display();
int main()
{
  int n, data, pos;
  printf("\n Enter the number of data ::");
  scanf("%d", &n);
  create(n);
  printf("\n Show the data::");
  display();
  // ...................inshartAny successfull......................................");
  return 0;
}
void create(int n)
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
}
void display()
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
      printf("%dx^%d\t ", temp->data, temp->pow);
      temp = temp->next;
      /* code */
    }
  }
  /* code */
}
