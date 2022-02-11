#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct Palet{
    int cod;
    struct Palet* next;
} Palet;

typedef struct Depozit {
    char nume[30];
    struct Palet *inceput;
} Depozit;

typedef struct {
    Depozit depozite[MAX];
    int ultim;
} Lista;

Lista lista;

Palet *adaugaPalet(int cod, Palet *next)
{
    Palet* p = (Palet*)malloc(sizeof(Palet));
    if (!p)
        exit(1);
    p->cod = cod;
    p->next = next;
    return p;
}

void stergePalet(int cod)
{
    int i;
    for (i = 0; i < lista.ultim; i++)
    {
        Palet* p;
        Palet* ant;
        for (ant = NULL, p = lista.depozite[i].inceput; p; ant = p, p = p->next)
            if (p->cod == cod)
            {
                if (ant == NULL)
                    lista.depozite[i].inceput = lista.depozite[i].inceput->next;
                else
                    ant->next = p->next;
            }
    }
}

int main()
{
    strcpy(lista.depozite[lista.ultim].nume, "Depozit 1");
    lista.depozite[lista.ultim++].inceput = adaugaPalet(1234, adaugaPalet(8427, adaugaPalet(7345, adaugaPalet(8456, adaugaPalet(3245, NULL)))));

    strcpy(lista.depozite[lista.ultim].nume, "Depozit 2");
    lista.depozite[lista.ultim++].inceput = adaugaPalet(6823, adaugaPalet(7349, adaugaPalet(7344, adaugaPalet(9012, adaugaPalet(7345, NULL)))));

    strcpy(lista.depozite[lista.ultim].nume, "Depozit 3");
    lista.depozite[lista.ultim++].inceput = adaugaPalet(7345, adaugaPalet(8345, adaugaPalet(8235, adaugaPalet(8756, adaugaPalet(3249, NULL)))));

    for (int i = 0; i < lista.ultim; i++)
    {
        for (Palet* p = lista.depozite[i].inceput; p; p = p->next)
            printf("%d ", p->cod);
        printf("\n");
    }

    stergePalet(7345);

    for (int i = 0; i < lista.ultim; i++)
    {
        for (Palet* p = lista.depozite[i].inceput; p; p = p->next)
            printf("%d ", p->cod);
        printf("\n");
    }
}

