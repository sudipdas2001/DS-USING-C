#include <stdio.h>
#include <stdlib.h>
struct node
{
    int co;
    int expo;
} p1[10], p2[10];
void create(struct node[], int);
void displa(struct node[], int terms);
int main()
{

    int t1, t2;
    printf("\n Enetr the total number of polinomial:");
    scanf("%d", &t1);
    create(p1, t1);
    printf("\n 1st polinomial:");
    displa(p1, t1);

    printf("\n Enetr the total number of polinomial:");
    scanf("%d", &t1);
    create(p2, t1);
    printf("\n 1st polinomial:");
    displa(p2, t1);

    return 0;
}
void create(struct node p[10], int t)
{

    int i;

    for (i = 0; i < t; i++)
    {

        printf("\n Enter the exponent part");
        scanf("%d", &p[i].co);
        printf("\n Enetr expo");
        scanf("%d", &p[i].expo);
    }
}
void displa(struct node p[10], int item)
{
    int k;
    for (k = 0; k < item; k++)
        printf("%dx^%d+", p[k].co, p[k].expo);
}
