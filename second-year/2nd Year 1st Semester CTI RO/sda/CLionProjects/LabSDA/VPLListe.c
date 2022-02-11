#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char (*codUnic)[100];
    int varf;
} stiva;
stiva st;

typedef struct {
    int ID;
    int dimensiuneMAX;
    stiva membri;
} ProiectSoftware;

struct Nod{
    ProiectSoftware proiect;
    struct Nod* urmator;
};
struct Nod* cap;

void push(char cod) {
    strcpy(st.codUnic[st.varf], cod);
    st.varf++;
}

char pop() {
    st.varf--;
    return st.codUnic[st.varf];
}

void AdaugaProiect(int ID, int dimensiuneMAX) {
    ProiectSoftware proiect;
    proiect.ID = ID;
    proiect.dimensiuneMAX = dimensiuneMAX;
    proiect.membri.codUnic = (char**)malloc(dimensiuneMAX*sizeof(char*));
    proiect.membri.varf = 0;
    struct Nod* nod = (struct Nod*) malloc(sizeof(struct Nod*));
    nod->urmator = cap;
    nod->proiect = proiect;
    cap = nod;
}

void AdaugaMembru (char *cod, int ID) {
    int gasit = 0;
    struct Nod* curent = cap;
    while(curent != NULL && !gasit) {
        if( curent->proiect.ID == ID && curent->proiect.membri.varf < curent->proiect.dimensiuneMAX) {
            push(cod);
            gasit = 1;
        }
        curent = curent->urmator;
    }
    if( gasit == 0) {
        printf("Nu exista");
    }
}

void DetasareMembru(int IDProiect) {
    int gasit = 0;
    struct Nod* curent = cap;
    char* auxiliar;

    while(curent != NULL) {
        if(curent->proiect.ID == IDProiect) {
            pop();
            gasit = 1;
        }
        curent = curent->urmator;
    }
}

void afisare() {
    struct Nod* curent;
    curent = cap;
    while(curent != NULL) {
        printf("%d %d\n",curent->proiect.ID, curent->proiect.dimensiuneMAX);
        printf("Membri: ");
        for(int i = curent->proiect.membri.varf - 1; i >= 0; i--) {
            printf("%s ", curent->proiect.membri.codUnic[i]);
        }
        printf("\n");
        curent = curent->urmator;
    }
}

int main() {
    int optiune, ID, dimensiuneMax;
    char cod[100];
    cap = NULL;

    printf("1 - Adaugare Proiect\n2 - Adauga Membru\n3 - Detasare Membru\n4 - Afisare\n5 - Iesire\n");
    printf("Optiunea dumneavoastra = ");
    scanf("%d", &optiune);
    while(optiune != 5) {
        switch (optiune) {
            case 1:
                printf("ID = ");
                scanf("%d", &ID);
                printf("Dimensiune maxima = ");
                scanf("%d", &dimensiuneMax);
                AdaugaProiect(ID, dimensiuneMax);
                break;
            case 2:
                printf("ID = ");
                scanf("%d", &ID);
                printf("Cod membru = ");
                scanf("%s", cod);
                AdaugaMembru(cod, ID);
                break;
            case 3:
                printf("ID = ");
                scanf("%d", &ID);
                DetasareMembru(ID);
                break;
            case 4:
                afisare();
                break;
            case 5:
                break;
            default:
                printf("Optiune gresita");
                break;
        }
        printf("Optiunea dumneavoastra = ");
        scanf("%d", &optiune);
    }
    free(cap);
}

