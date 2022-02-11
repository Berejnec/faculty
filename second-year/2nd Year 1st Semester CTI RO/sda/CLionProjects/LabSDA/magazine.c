#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produs{
    int cod;
    struct Produs* next;
}Produs;

typedef struct Magazin {
    char nume[50];
    struct Produs *first;
}Magazin;

typedef struct List {
    Magazin magazin[30];
    int contor;
}List;

List list;

void adauga_produs(int cod) {
    Produs* produs = (Produs*) malloc(sizeof(Produs));
    if(!produs){
        exit(1);
    }
    produs->cod = cod;
    produs->next = NULL;
}

void eliminare_produs(int cod) {
    int i;
    for(i = 0 ; i < list.contor; i++) {
        Produs* produs;
        Produs* prev;
        for(prev = NULL, produs = list.magazin[i].first; produs != NULL; prev = produs, produs = produs->next) {
            if(produs->cod == cod) {
                if(prev == NULL) {
                    list.magazin[i].first = list.magazin[i].first->next;
                }
                else {
                    prev->next = produs->next;
                }
            }
        }
    }
}

int main() {
//    strcpy(list.magazin[list.ultim].nume, "Magazin1");
//    list.magazin[list.ultim++].first = adauga_produs(123);

}
