#include <stdio.h>
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
//void deplasare(int *s, int *temp, int *d, int a[])
////realizeaza glisarea elementului a[s] in pozitia corecta
//{
//    int i, j;
//    int ret = 0;
//    i = *s; j = 2 * i; *temp = a[i]; ret = 0;
//    while ((j <= *d) && (!ret))
//    {
//        if (j < *d && !trebuie_schimbat(a[j], a[j+1]))
//            j = j + 1;
//
//        if (!trebuie_schimbat(*temp, a[j]))
//        {
//            a[i] = a[j];
//            i = j;
//            j = 2 * i;
//        }
//        else
//            ret = 1;
//    }   /*while*/
//    a[i] = *temp;
//}   /*Deplasare*/
//
//void heapsort(int a[], int n)
//{
//    int s, d;
//    int temp;
//    /*construcţie ansamblu*/
//    s = (n / 2) + 1; d = n - 1;
//    while (s>0)
//    {
//        s = s - 1; deplasare(&s, &temp, &d, a);
//    }   /*while*/
//    while (d>0)   /*sortare ansamblu*/
//    {
//        temp = a[0]; a[0] = a[d]; a[d] = temp;
//        d = d - 1; deplasare(&s, &temp, &d, a);
//    }
//}    /*Heapsort*/

//void quicksort(int a[], int s, int d) {
//    int i = s, j = d;
//    int x = a[(s + d) / 2];
//    do {
//        while (a[i] < x) i++;
//        while (a[j] >x) j--;
//        if (trebuie_schimbat(a[i],a[j])) {
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

void bubblesort(int a[], int n)
{
    int i,j; int temp;
    for(j = n-1; j > 0; j--) {
        for(i = 0; i < j; i++){
            if(trebuie_schimbat(a[i],a[i+1]) && !(a[i] < 0 && a[i+1] < 0)) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}    /*Bubblesort*/
int main() {
    int b[] = {9, -2, -3, -7, 1, 3, -9, -6, 2};
//    heapsort(b,9);
    bubblesort(b,9);
    for(int i = 0 ; i < 9; i++) {
        printf("%d ", b[i]);
    }
    printf("\n\n");

}

