#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
typedef struct {
    char nume[25];
    char telefon[10];
    int an;
    int venit;
} Agenda;

Agenda agenda[N];

void mutare_venit_mic1(){
    Agenda auxiliar;
    int contor = 0;
    for(int i = 0 ; i < N; i++) {
        if(agenda[i].venit < 1000 && contor < 2) {
            auxiliar = agenda[i];
            for(int j = i+1; j < N; j++) {
                agenda[j-1] = agenda[j];
            }
            agenda[N-1] = auxiliar;
            contor++;
            i--;
        }
    }
}
void mutare_venit_mic2() {
    Agenda aux;
    int j = N-2;
    for(int i = 0; i < N && j < N; i++) {
        if(agenda[i].venit < 1000) {
            aux = agenda[i];
            agenda[i] = agenda[j];
            agenda[j] = aux;
            j++;
        }
    }
}
int conditie_varsta(Agenda x) {
    return x.an >= 30 && x.an <= 40;
}
int trebuie_schimbat(Agenda x, Agenda y) {
    if(strcmp(x.nume, y.nume) > 0)
        return 1;
    if(!(x.an >= 30 && x.an <=40))
        return 1;
    if(strcmp(x.nume, y.nume) < 0)
        return 0;
    if((x.an >= 30 && x.an <=40))
        return 0;
}

void deplasare(int *s, Agenda *temp, int *d, Agenda a[])
//realizeaza glisarea elementului a[s] in pozitia corecta
{
    int i, j;
    int ret = 0;
    i = *s; j = 2 * i; *temp = a[i]; ret = 0;
    while ((j <= *d) && (!ret))
    {
        if (j < *d && !trebuie_schimbat(a[j],a[j+1]))
            j = j + 1;

        if (!trebuie_schimbat(*temp,a[j]))
        {
            a[i] = a[j]; i = j; j = 2 * i;
        }
        else
            ret = 1;
    }   /*while*/
    a[i] = *temp;
}   /*Deplasare*/

void heapsort(Agenda a[], int n)
{
    int s, d;
    Agenda temp;
    /*construcţie ansamblu*/
    s = (n / 2) + 1; d = n - 1;
    while (s>0)
    {
        s = s - 1;
        deplasare(&s, &temp, &d, a);
    }   /*while*/
    while (d>0)   /*sortare ansamblu*/
    {
        temp = a[0]; a[0] = a[d]; a[d] = temp;
        d = d - 1;
        deplasare(&s, &temp, &d, a);
    }
}    /*Heapsort*/

void sortare_prin_selectie(Agenda a[], int n)
{
    int i,j,min;
    Agenda temp;
    for( i= 0; i <= n-1; i ++)
    {
        if(a[i].an > 30 && a[i].an < 40) {
            min= i; temp= a[i];
            for( j= i+1; j < n; j ++)
                if (a[j].an > 30 && a[j].an < 40 && a[j-1].an > 30 && a[j-1].an < 40 && strcmp(a[j].nume,a[min].nume) < 0)
                {
                    min= j;
                    temp= a[j];
                }   /*FOR*/

            a[min]= a[i];
            a[i]= temp;
        }
         /*interschimbarea*/
    }   /*FOR*/
}    /*SortarePrinSelectie*/
int main() {
//
//    for(int i = 0 ; i < N; i++) {
//        scanf("%d", &agenda[i].venit);
//    }
//    for(int i = 0 ; i < N; i++){
//        printf("%d ", agenda[i].venit);
//    }
//    printf("\n\n");
//    mutare_venit_mic2();
//    for(int i = 0 ; i < N; i++){
//        printf("%d ", agenda[i].venit);
//    }

    for(int i = 0 ; i < N; i++) {
        printf("Nume:\n");
        scanf("%s", agenda[i].nume);
        printf("Varsta:\n");
        scanf("%d", &agenda[i].an);
    }

    sortare_prin_selectie(agenda, N);

    for(int i = 0 ; i < N; i++) {
        printf("%s  ", agenda[i].nume);
    }
}

