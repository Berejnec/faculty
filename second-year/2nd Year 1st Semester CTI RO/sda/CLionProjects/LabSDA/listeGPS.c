#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct GPS {
    int cod;
    struct GPS* next;
} GPS;

typedef struct Firma {
    char nume[30];
    struct GPS* inceput;
} Firma;

typedef struct Lista {
    int ultim;
    Firma firma[MAX];
} Lista;

Lista lista;

GPS *adaugaGPS(int cod_nou, GPS* next_nou) {
    GPS* new_gps = (GPS*)malloc(sizeof(GPS));
    if( new_gps == NULL) {
        exit(EXIT_FAILURE);
    }
    new_gps->cod = cod_nou;
    new_gps->next = next_nou;
    return new_gps;
}

void eliminare_GPS(int cod_stergere) {
    for(int i = 0; i < lista.ultim; i++) { //// pentru fiecare firma din lista principala
        GPS* gps; //// nod curent
        GPS* anterior; //// nod dinaintea celui curent
        for(anterior = NULL, gps = lista.firma[i].inceput; gps != NULL; anterior = gps, gps = gps->next) {
            if(gps->cod == cod_stergere) {
                if(anterior == NULL) {
                    lista.firma[i].inceput = lista.firma[i].inceput->next;
                } else {
                    anterior->next = gps->next;
                }
            }
        }
    }
}

int main() {
    strcpy(lista.firma[lista.ultim].nume, "Firma 1");
    lista.firma[lista.ultim++].inceput = adaugaGPS(10, adaugaGPS(15, adaugaGPS(20, adaugaGPS(25, NULL))));

    strcpy(lista.firma[lista.ultim].nume, "Firma 2");
    lista.firma[lista.ultim++].inceput = adaugaGPS(11, adaugaGPS(15, adaugaGPS(20, adaugaGPS(30, NULL))));

    strcpy(lista.firma[lista.ultim].nume, "Firma 3");
    lista.firma[lista.ultim++].inceput = adaugaGPS(12, adaugaGPS(18, adaugaGPS(15, adaugaGPS(23, NULL))));

    for(int i = 0 ; i < lista.ultim; i++) {
        GPS* gps;
        for(gps = lista.firma[i].inceput; gps != NULL; gps = gps->next) {
            printf("%d ", gps->cod);
        }
        printf("\n");
    }

    eliminare_GPS(23);

    for(int i = 0 ; i < lista.ultim; i++) {
        GPS* gps;
        for(gps = lista.firma[i].inceput; gps != NULL; gps = gps->next) {
            printf("%d ", gps->cod);
        }
        printf("\n");
    }
}

