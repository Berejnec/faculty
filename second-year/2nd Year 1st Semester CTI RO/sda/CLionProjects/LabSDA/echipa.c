#include <stdio.h>
#include <stdlib.h>

typedef struct Echipa {
    char nume[25];
    int puncte;
    int buget;
    char oras[25];
} Echipa;

// a)
int conditie(Echipa e1, Echipa e2) {
    if(e1.puncte < 45 && e2.puncte >= 45)
        return 0;
    if(e1.puncte <= 20 && e2.puncte >20)
        return 0;
    return 1;
}

void sortare(Echipa e[], int n) {
    int gata = 0;
    while(!gata) {
        gata = 1;

        for(int i = 0; i < n; i++) {
            if(!conditie(e[i],e[i+1])) {
                Echipa aux;
                aux = e[i];
                e[i] = e[i+1];
                e[i+1] = aux;
                gata = 0;
            }
        }
    }
}

//b)
void selectie_optimizata(Echipa e[], int n)
{
    int i,j,max;
    Echipa temp;
    for( i= 0; i <= n-2; i ++)
    {
        if(e[i].buget > 100000) {
            max = i;
            temp = e[i];
            for( j= i+1; j < n; j ++)
                if (e[j].buget > 100000 && e[j].puncte > e[max].puncte)
                    max= j;
            temp= e[max];
            e[max]= e[i];
            e[i]= temp;
        }
    }   /*FOR*/
}    /*SelectieOptimizata*/

int main() {
    Echipa echipa[6] = { {"echipa1", 100, 200500, "asd"}, {"echipa2", 48, 10, "asd"},
                         {"echipa3", 50, 1000000, "asdd"}, { "echipa4", 10, 1000, "ddd"},
                         {"echipa5", 20, 100000, "sasadasd"}, {"echipa6", 25, 250000, "zzz"}};
//    sortare(echipa, 6);
    for(int i = 0 ; i < 6; i++) {
        printf("%s %d %d %s\n", echipa[i].nume, echipa[i].puncte, echipa[i].buget, echipa[i].oras);
    }
    printf("\n\n");
    selectie_optimizata(echipa, 6);
    for(int i = 0 ; i < 6; i++) {
        printf("%s %d %d %s\n", echipa[i].nume, echipa[i].puncte, echipa[i].buget, echipa[i].oras);
    }
}

