#include <stdio.h>
#include <stdlib.h>
int trebuie_schimbat(int x, int y) {
    if(x > 0 && y < 0)
        return 1;
    if(x < 0 && y > 0)
        return 0;
    if(x >= y && y > 0)
        return 1;
    if(x < y && y > 0)
        return 0;
}
void deplasare(int *s, int *temp, int *d, int a[])
//realizeaza glisarea elementului a[s] in pozitia corecta
{
    int i, j;
    int ret = 0;
    i = *s; j = 2 * i; *temp = a[i]; ret = 0;
    while ((j <= *d) && (!ret))
    {
        if (j < *d && trebuie_schimbat(a[j], a[j+1]))
            j = j + 1;

        if (trebuie_schimbat(*temp, a[j]))
        {
            a[i] = a[j];
            i = j;
            j = 2 * i;
        }
        else
            ret = 1;
    }   /*while*/
    a[i] = *temp;
}   /*Deplasare*/

void heapsort(int a[], int n)
{
    int s, d;
    int temp;
    /*construcţie ansamblu*/
    s = (n / 2) + 1; d = n - 1;
    while (s>0)
    {
        s = s - 1; deplasare(&s, &temp, &d, a);
    }   /*while*/
    while (d>0)   /*sortare ansamblu*/
    {
        temp = a[0]; a[0] = a[d]; a[d] = temp;
        d = d - 1; deplasare(&s, &temp, &d, a);
    }
}    /*Heapsort*/
//int e_valid(int x, int y) {
//    if()
//}
//void sortare_prin_insertie_binara(int a[],int n)
//{
//    int i,j,stanga,dreapta,m; int temp;
//    for( i= 1; i < n; i ++)
//    {
//        temp= a[i]; stanga= 0; dreapta= i-1;
//        while (stanga<=dreapta)
//        {
//            m= (stanga+dreapta)/ 2;
//            if (a[m] > temp)
//                dreapta= m-1;
//            else
//                stanga= m+1;
//        }   /*WHILE*/
//        for( j= i-1; j >= stanga; j--)
//            a[j+1]= a[j];
//        a[stanga]= temp;
//    }   /*FOR*/
//}
//
//void quicksort(int a[], int s, int d) {
//    int i = s, j = d;
//    int x = a[(s + d) / 2];
//    do {
//        while (a[i] < x) i++;
//        while (a[j] >x) j--;
//        if (i <= j) {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//            i++;
//            j--;
//        }
//    } while (i <= j);
//
//    if (s<j) quicksort(a,s, j);
//    if (d>i) quicksort(a,i, d);
//}/*quicksort*/
int main() {
//    int a[] = {2, -5, 1, -8 , -9, 5, 3};
//    sortare_prin_insertie_binara(a, 7);
//    for(int i = 0 ; i < 7; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n\n");
    int b[] = {9, 5, 3, 2, 1, -3, -5, -6, -9};
////    quicksort(b, 0, 8);
    heapsort(b,9);
    for(int i = 0 ; i < 9; i++) {
        printf("%d ", b[i]);
    }
    printf("\n\n");
}

