#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *NewNode(struct node *ekle, int data)
{
    struct node *yeni = (struct node *)malloc(sizeof(struct node));
    yeni->data = data;
    yeni->next = ekle;
    return yeni;
};

void Listele(struct node *listele)
{
    while (listele != NULL)
    {
        printf("%d\t", listele->data);
        listele = listele->next;
    }
}
int main()
{
    struct node *liste = NULL;
    liste = NewNode(liste, 9);
    liste = NewNode(liste, 4);
    liste = NewNode(liste, 8);
    liste = NewNode(liste, 2);
    liste = NewNode(liste, 5);
    Listele(liste);
    return 0;
}
