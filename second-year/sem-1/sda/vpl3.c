#include <stdio.h>
#include <string.h>

typedef struct{
    int nota;
    char gen;
    char nume[35];
}Student;

void bubblesort(Student v[],int n){
    int i,j;
    Student temp;
    for(i=0;i<n;i++){
        for(j = n-1; j>i; j--)
            if(strcmp(v[j-1].nume,v[j].nume) > 0){
                temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
    }
}
void binaryInsert(Student v[],int n){
    int i,j,s,d,m;
    Student temp;
    for(i=1;i<n;i++){
        temp = v[i];
        s=0;
        d=i-1;
        while(s<=d){
            m = (s+d)/2;
            if(strcmp(v[m].nume,temp.nume) > 0)
                d = m-1;
            else s = m+1;
        }
        for(j=i-1;j>=s;j--)
            v[j+1] = v[j];
        v[s] = temp;
    }
}
void bubbleSortNota(Student v[],int n){
    int i,j;
    Student temp;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--)
            if(v[j-1].nota >= 5 && v[j].nota < 5){
                temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
    }
}
void bubbleSortGen(Student v[],int n){
    int i,j;
    Student temp;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--)
            if((v[j-1].gen == 'M' && v[j].gen == 'M') || (v[j-1].gen == 'F' && v[j].gen == 'F') ){
                bubblesort(v,n);
            }
    }
}
void bubbleSortMedie(Student v[], int n){
    int i,j;
    Student temp;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--)
            if( (v[j-1].nota < 5 && v[j].nota < 5) || (v[j-1].nota >= 5 && v[j].nota >= 5) ){
                if(v[j-1].gen == 'M' && v[j].gen == 'F'){
                    temp = v[j-1];
                    v[j-1] = v[j];
                    v[j] = temp;
                }
            }
    }
}
void bubbleSortComplet(Student v[], int n){
    bubbleSortGen(v,n);
    bubbleSortMedie(v,n);
    bubbleSortNota(v,n);

}
int main(){
    int N,i;
    char nume1[35],nume2[35];
    Student v[10];
    printf("N=");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d %c ",&v[i].nota,&v[i].gen);
        fgets(v[i].nume,35,stdin);
        v[i].nume[strcspn(v[i].nume,"\n")] = 0;
    }
    //printf("%d %c %s",v[0].nota,v[0].gen,v[0].nume);
    printf("Introdu primul nume:\n");
    fgets(nume1, 35, stdin);
    nume1[strcspn(nume1, "\n")] = 0;

    printf("Introdu al doilea nume:\n");
    fgets(nume2,35,stdin);
    nume2[strcspn(nume2,"\n")] = 0;
    //cerinta1
    bubblesort(v,N);

    for(i = 0; i < N; i++){
        if(strcmp(nume1,v[i].nume) == 0) {

            printf("%d", i);
            break;
        }
    }
    printf("\n");
    //cerinta1

    bubbleSortComplet(v,N);

    for(i = 0; i < N; i++){
        if(strcmp(nume2,v[i].nume) == 0) {

            printf("%d", i);
            break;
        }
    }




}

