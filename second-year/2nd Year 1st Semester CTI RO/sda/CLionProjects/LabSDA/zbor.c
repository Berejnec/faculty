#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct Pasager {
    int cod;
    struct Pasager* urmator;
} Pasager;

typedef struct Zbor {
    char nume[50];
    struct Pasager* inceput;
} Zbor;

typedef struct Lista {
    Zbor zbor[MAX];
    int ultim;
} Lista;

Lista lista;

Pasager *adaugaPasager(int cod, Pasager *urmator)
{
    Pasager * p = (Pasager *)malloc(sizeof(Pasager));
    if (!p)
        exit(1);
    p->cod = cod;
    p->urmator = urmator;
    return p;
}

void eliminare_pasager(int cod_stergere) {
    for(int i = 0; i < lista.ultim; i++) {
        Pasager* pasager;
        Pasager* anterior;

        for(anterior = NULL, pasager = lista.zbor[i].inceput; pasager != NULL; anterior = pasager, pasager = pasager->urmator) {
            if(pasager->cod == cod_stergere) {
                if(anterior == NULL) {
                    lista.zbor[i].inceput = lista.zbor[i].inceput->urmator;
                }
                else {
                    anterior->urmator = pasager->urmator;
                }
            }
        }
    }
}

int main() {
    strcpy(lista.zbor[lista.ultim].nume, "Depozit 1");
    lista.zbor[lista.ultim++].inceput = adaugaPasager(1234, adaugaPasager(8427, adaugaPasager(7345, adaugaPasager(8456, adaugaPasager(3245, NULL)))));

    strcpy(lista.zbor[lista.ultim].nume, "Depozit 2");
    lista.zbor[lista.ultim++].inceput = adaugaPasager(6823, adaugaPasager(7349, adaugaPasager(7344, adaugaPasager(9012, adaugaPasager(7345, NULL)))));

    strcpy(lista.zbor[lista.ultim].nume, "Depozit 3");
    lista.zbor[lista.ultim++].inceput = adaugaPasager(7345, adaugaPasager(8345, adaugaPasager(8235, adaugaPasager(8756, adaugaPasager(3249, NULL)))));

    for(int i = 0; i < lista.ultim; i++) {
        for(Pasager* pasager = lista.zbor[i].inceput; pasager != NULL; pasager = pasager->urmator) {
            printf("%d ", pasager->cod);
        }
        printf("\n");
    }

    eliminare_pasager(6823);
    printf("\n");

    for(int i = 0; i < lista.ultim; i++) {
        for(Pasager* pasager = lista.zbor[i].inceput; pasager != NULL; pasager = pasager->urmator) {
            printf("%d ", pasager->cod);
        }
        printf("\n");
    }

}

