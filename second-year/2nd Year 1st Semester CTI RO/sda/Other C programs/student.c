#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char nume[35];
    int varsta;
    int premii; // 1 = premiat; 0 - nu e premiat
} Student;

// a)
// mutarea pe primele pozitii a studentilor care au primit premii
void insertie(Student a[], int n)
{
    int i,j;
    //fanionul pe poziţia a[n]
    for( i=n-2;i>=0;i--)
    {
        a[n]=a[i];
        j=i+1;
        while(a[n].premii < a[j].premii)
        {
            a[j-1] = a[j];
            j++;
        }
        a[j-1] = a[n];
    }
}

void sortare(Student a[], int n) {
    int ok = 0;
    while(!ok) {
        ok = 1;
        for(int i = 0 ; i < n; i++ ) {
            if(a[i].premii < a[i+1].premii) {
                ok = 0;
                Student aux;
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
    }
}
void sortare2(Student a[], int n) {
    for(int i = 0 ; i < n; i++ ) {
        if(a[i].premii < a[i+1].premii) {
            Student aux;
            aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
        }
    }
}
// b)
// sortare in ordine inversa dupa nume, a studentilor premiati (doar cei premiati vor fi sortati)
void sortare_prin_selectie(Student a[], int n)
{
    int i,j,min;
    Student temp;
    for( i = 0; i <= n-2; i++)
    {
        if(a[i].premii == 1) {
            min = i; temp = a[i];
            for( j= i+1; j < n; j ++)
                if (a[j].premii == 1 && strcmp(a[j].nume, temp.nume) > 0)
                {
                    min= j;
                    temp= a[j];
                }   /*FOR*/
            a[min] = a[i];
            a[i] = temp; /*interschimbarea*/
        }
    }   /*FOR*/
}    /*SortarePrinSelectie*/

int main() {
    Student s[5] = { {"Adi", 20, 0}, {"Aabi", 18, 1}, {"Zadu", 25, 1},
                     {"Mihai", 19, 0}, {"Caul", 25, 1}};
    for(int i = 0 ; i < 5; i++) {
        printf("%s %d %d\n", s[i].nume, s[i].varsta, s[i].premii);
    }
    printf("\n");
//    insertie(s,5);
    sortare(s, 5);
    sortare_prin_selectie(s, 5);
    for(int i = 0 ; i < 5; i++) {
        printf("%s %d %d\n", s[i].nume, s[i].varsta, s[i].premii);
    }
    return 0;
}
