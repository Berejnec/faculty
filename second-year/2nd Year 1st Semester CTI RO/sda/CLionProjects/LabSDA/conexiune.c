#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Conexiune {
    char nume[35];
} Conexiune;

typedef struct Persoana {
    char id;
    char nume[35];
    char ocupatie[35];
    struct Conexiune conexiuni[100];
    int ultim;
    struct Persoana* next;
} Persoana;

Persoana* persoane;

Persoana* adaugaPersoana(int id, char nume[35], char ocupatie[35], Persoana* next)
{
    Persoana* p = (Persoana*)malloc(sizeof(Persoana));
    if (!p)
    {
        exit(1);
    }
    p->id = id;
    strcpy(p->nume, nume);
    strcpy(p->ocupatie, ocupatie);
    p->next = next;
    return p;
}

void adaugaConexiune(Conexiune c, Persoana* p)
{
    p->conexiuni[p->ultim++] = c;
}

int main()
{
    persoane = adaugaPersoana(1, "Ion", "doctor", adaugaPersoana(2, "Ana", "student", adaugaPersoana(3, "Mihai", "tamplar", NULL)));
    Conexiune c1 = { "George" };
    Conexiune c2 = { "Stefan" };
    Conexiune c3 = { "Raul" };
    Conexiune c4 = { "Nicu" };
    adaugaConexiune(c1, persoane);
    adaugaConexiune(c2, persoane->next);
    adaugaConexiune(c3, persoane->next);
    adaugaConexiune(c4, persoane->next->next);

    Persoana* p;
    for (p = persoane; p; p = p->next)
    {
        printf("%d %s %s ", p->id, p->nume, p->ocupatie);
        printf("Conexiuni: ");
        for (int i = 0; i < p->ultim; i++)
            printf("%s ", p->conexiuni[i].nume);
        printf("\n");
    }
    return 0;
}

