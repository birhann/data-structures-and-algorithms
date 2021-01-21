#include <stdio.h>

int intArray[5];
int on = 0;
int arka = 0;
int elemansayisi = 0;

void Push(int veri)
{
    if (elemansayisi < 5)
    {
        intArray[arka] = veri;
        arka++;
        if (arka == 5)
            arka = 0;
        elemansayisi++;
    }
}

int Pop()
{
    if (elemansayisi != 0)
    {
        int data = intArray[on];
        on++;
        if (on == 5)
            on = 0;
        elemansayisi--;
        return data;
    }
}

int main()
{
    Push(6);
    Push(7);
    Push(8);
    Push(9);
    Pop();
    Pop();
    Push(10);
    Push(11);
    Push(12);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", intArray[i]);
    }
    return 0;
}