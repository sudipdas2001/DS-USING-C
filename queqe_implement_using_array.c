#include <stdio.h>
#define MAX 6
int queqe[MAX];
int f = -1;
int r = -1;
void inshart();
void delete ();
void display();
int main()
{
    int n;
    do
    {
        printf("\n Enter 1 for inshart");
        printf("\n Enter 2 for delet");
        printf("\n Enter 3 for display");
        printf("\n Enter 0 for exit");
        printf("\n Enter your choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            inshart();
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
            printf("\n Entre your choice is wrong");
        }

    } while (n != 0);
    return 0;
}
void inshart()
{
    int item;
    if (r == (MAX - 1))
    {
        printf("\n queqe is overflow:");
    }
    else
    {


        printf("\n Enter the item to inshart");
        scanf("%d", &item);
        r = r + 1;
        queqe[r] = item;
    }
}
void delete ()
{





        printf("\n the delete element is %d", queqe[f]);
        f = f + 1;

}

void display()
{
    int i;
    for (i = f; i <= r; i++)
    {
        printf("%d\t", queqe[i]);
    }
}
