#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void inshart();
void delete ();
void display();
int main()
{

    int ch;
    do
    {
        printf("\n Enter 1 for inshart:");
        printf("\n Enter 2 for delete");
        printf("\n Enter 3 for display");
        printf("\n Enter 0 for exit");
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case /* constant-expression */ 1:
            inshart();
            /* code */
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n Enter your choice is wrong ");
        }
    } while (ch != 0);
}
void inshart()
{
    int item;
    struct node *temp;
    printf("\n Enter the element");
    scanf("%d", &item);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if (front == NULL)
    {
        front = rear = temp;
        /* code */
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void delete ()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("\n queqe is empty");
        /* code */
    }
    else
    {
        temp = front;
        front = front->next;
        printf("\n deleted data is %d", temp->data);
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("\n empty ");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
