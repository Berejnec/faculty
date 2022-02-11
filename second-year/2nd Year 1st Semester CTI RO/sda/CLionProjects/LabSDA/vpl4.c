#include <stdio.h>
#include <string.h>

#define MAX 1500

typedef struct {
    int medie;
    char gen;
    char nume[50];
}Student;

Student v[50];

unsigned biti(unsigned x, int k, int j)
{
    return (x>>k)&~(~0<<j);
}

void RadixInterschimbare (int stanga,int dreapta, int b)
{
    int i,j;
    Student temp,temp2;
    if ((dreapta>stanga) && (b>=0))
    {
        i = stanga; j = dreapta;
        do {
            while((biti(v[i].medie,b,1) == 1) && (i < j))
                i = i+1;
            while((biti(v[j].medie,b,1) == 0) && (i < j))
                j = j-1;
            temp = v[i];
            v[i]= v[j];
            v[j]= temp;
        } while (!(j==i));
        if (biti(v[dreapta].medie,b,1) == 1)
            j = j+1;
        RadixInterschimbare(stanga,j-1,b-1);
        RadixInterschimbare(j,dreapta,b-1);
    }
}
int compare(Student a,Student v){
    if(a.gen < v.gen)
        return 1;
    if(a.gen > v.gen)
        return 0;
    if(a.medie < v.medie)
        return 1;
    if(a.medie > v.medie)
        return 0;
    if(strcmp(a.nume,v.nume) < 0)
        return 1;
    if(strcmp(a.nume,v.nume) >= 0)
        return 0;
}

void QuickSort(Student a[], int n)
{
    int i, j, s, d;
    Student x, temp;
    unsigned char is;
    struct {
        int s, d;
    }
    stiva[MAX];
    is = 1;
    stiva[0].s = 0;
    stiva[0].d = n- 1;

    do {
        s = stiva[is - (1)].s;
        d = stiva[is - (1)].d;
        is = is - 1;
        do {
            i = s;
            j = d;
            x = a[(s + d) / 2];
            do {
                while (compare(a[i],x))
                    i = i + 1;
                while (compare(x,a[j]))
                    j = j - 1;
                if (i <= j)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    i = i + 1;
                    j = j - 1;
                }
            }
            while (!(i>j));
            if (i<d)
            {

                is = is + 1;
                stiva[is - 1].s = i;
                stiva[is - 1].d = d;
            }
            d = j;
        }
        while (!(s >= d));
    }
    while (!(is == 0));
}
int main(){
    int N,i;
    char nume1[50], nume2[50];
    printf("N=");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d %c ",&v[i].medie,&v[i].gen);
        fgets(v[i].nume,35,stdin);
        v[i].nume[strcspn(v[i].nume,"\n")] = 0;
    }
    printf("Primul nume:");
    fgets(nume1,50,stdin);
    nume1[strcspn(nume1,"\n")] = 0;

    printf("Al doilea nume:");
    fgets(nume2,50,stdin);
    nume2[strcspn(nume2,"\n")] = 0;

    //Cerinta 1
    RadixInterschimbare(0,N,8);

    for(i = 0; i < N; i++){
        if(strcmp(v[i].nume,nume1) == 0){
            printf("%d",i);
            break;
        }
    }

    printf("\n\n");
    //Cerinta 2
    QuickSort(v,N);
    for(i = 0; i < N; i++){
        if(strcmp(v[i].nume,nume2) == 0){
            printf("%d",i);
            break;
        }
    }

}
