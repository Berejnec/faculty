#include <stdio.h>
#define N 4
typedef struct Angajat {
    char nume[35];
    int salar;
    int bonus; // 1 - are bonus; 0 - nu are bonus
} Angajat;

// subpct a)
void bubblesort(Angajat a[N], int n) {
    int i,j;
    Angajat aux;
    for(i = 0 ; i < N; i++) {
        for(j = N-1; j > i; j--) {
            if(a[j-1].bonus == 0 && a[j].bonus == 1) {
                aux = a[j-1];
                a[j-1] = a[j];
                a[j] = aux;
            }
        }
    }
} // O(N^2)
// mutarea pe primele pozitii a celor care au primit bonus
void insertie(Angajat a[],int n)
{
    int i,j;
    //fanionul pe poziţia a[n]
    for( i=n-2;i>=0;i--)
    {
        a[n]=a[i];
        j=i+1;
        while(a[n].bonus < a[j].bonus)
        {
            a[j-1]=a[j];
            j++;
        }
        a[j-1]=a[n];
    }
} // worst case: O(N^2); best case: O(n)

// subpct b)
void selectie_optimizata(Angajat a[], int n)
{
    int i, j, max;
    Angajat temp;
    for (i = 0; i <= n - 2; i++)
        if(a[i].bonus == 0)
        {
            max = i;
            for (j = i + 1; j < n; j++)
                if (a[j].bonus == 0 && a[j].salar > a[max].salar)
                    max = j;
            temp = a[max]; a[max] = a[i]; a[i] = temp;
        }
}    /*SelectieOptimizata*/ //// E BUNA ASTA

void insertie2(Angajat a[],int n)
{
    int i,j;
    //fanionul pe poziţia a[n]
    for( i=n-2;i>=0;i--)
    {
        if(a[i].bonus == 0) {
            a[n]=a[i];
            j=i+1;
            while(!(a[n].salar > a[j].salar && a[n].bonus == 0))
            {
                a[j-1]=a[j];
                j++;
            }
            a[j-1]=a[n];
        }

    }
}

int main() {
//    Angajat angajat[N] = {{"adi",1200,0},{"bona",3500,1},{"mario",1900,1},{"sebi",1600,0}};
//    for(int i = 0; i<N; i++) {
//        printf("%s ", angajat[i].nume);
//    }
//    printf("\n");
//
////    bubblesort(angajat,N);
////    insertie(angajat, N);
////    selectie_optimizata(angajat,N);
//
//    insertie2(angajat, N);
//
//    for(int i = 0; i<N; i++) {
//        printf("%s %d %d\n", angajat[i].nume, angajat[i].salar, angajat[i].bonus);
//    }
//    printf("\n");
    Angajat a[100] = { {"Ion",1500,0},{"Ilie",3500,1},{"Mihai",1200,1},{"Dan",2000,0},{"Luca",4300,1}, {"Sebastian", 8000, 0} };
//    functie1(a, N);
//    insertie(a, 6);
//    insertie2(a, 6);
    selectie_optimizata(a, 6);
    for (int i = 0; i < 6; i++)
        printf("%s %d %d\n", a[i].nume, a[i].salar, a[i].bonus);
}
