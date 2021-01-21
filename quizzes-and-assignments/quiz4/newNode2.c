#include <stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *NewNode(struct node *ekle, int data)
{
    struct node *yeni = (struct node *)malloc(sizeof(struct node));
    yeni->data = data;
    if (ekle != NULL)
    {
        yeni->next = ekle;
        ekle->prev = yeni;
    }
    return yeni;
}

void Listele(struct node *listele)
{
    for (int i = 1; i < 3; i++)
    {
        printf("%d\t", listele->data);
        listele = listele->next;
    }
    for (int i = 1; i < 3; i++)
    {
        printf("%d\t", listele->data);
        listele = listele->prev;
    }
}

int main()
{
    struct node *liste = NULL;
    liste = NewNode(liste, 1);
    liste = NewNode(liste, 2);
    liste = NewNode(liste, 3);
    liste = NewNode(liste, 4);
    Listele(liste);
    return 0;
}