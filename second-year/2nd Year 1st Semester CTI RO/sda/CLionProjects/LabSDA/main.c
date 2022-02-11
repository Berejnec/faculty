#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5000

typedef struct {
    char nume[35];
    char opt[4][3];
}student;

student v[N];

void shakersort(student a[], int n, int *M,int *C){
    int j,ultim,sus,jos;
    student temp;
    sus = 1;
    jos = n-1;
    ultim = n-1;
    do{
        for(j = jos; j >= sus; j--){
            if (strcmp(a[j-1].nume,a[j].nume) > 0){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                ultim = j;
                (*C)++;
                (*M) += 4;
            }
        }
        sus = ultim + 1;
        for (j=sus;j<=jos;j++){
            if (strcmp(a[j-1].nume,a[j].nume) > 0){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                ultim = j;
                (*C)++;
                (*M) += 4;
            }
        }
        jos = ultim - 1;

    }while(!(sus>jos));
}
void shakersortReverse(student a[], int n, int *M,int *C){
    int j,ultim,sus,jos;
    student temp;
    sus = 1;
    jos = n-1;
    ultim = n-1;
    do{
        for(j = jos; j >= sus; j--){
            if (strcmp(a[j-1].nume,a[j].nume) < 0){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                ultim = j;
                (*C)++;
                (*M) += 4;
            }
        }
        sus = ultim + 1;
        for (j=sus;j<=jos;j++){
            if (strcmp(a[j-1].nume,a[j].nume) < 0){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                ultim = j;
                (*C)++;
                (*M) += 4;
            }
        }
        jos = ultim - 1;

    }while(!(sus>jos));
}

void insertsort(student a[],int n){
    int i,j;
    char temp[3] = "";
    for(i=1;i<4;i++){
        j = i-1;
        strcpy(temp,a[n].opt[i]);
        while(j >= 0 && strcmp(a[n].opt[j],temp)>0 )
        {
            strcpy(a[n].opt[j+1], a[n].opt[j]);
            j--;
        }
        strcpy(a[n].opt[j+1], temp);
    }

}

int main() {
    FILE *file;
    file = fopen("Studenti.txt","r");
    if(!file){
        printf("Eroare la deschiderea fisierului!");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while(!feof(file)){
        fgets(v[i].nume,35,file);
        fscanf(file,"%s %s %s %s\n",v[i].opt[0],v[i].opt[1],v[i].opt[2],v[i].opt[3]);
        i++;
    }

    fclose(file);

    int c=0,m=0;
    //shakersort(v,5000,&c,&m);
    //printf("Studentii ordonati alfabetic:\n");
    /*for(int i = 0;i<N;i++){
        printf("%s",v[i].nume);
        printf("%s %s %s %s\n\n", v[i].opt[0],v[i].opt[1],v[i].opt[2],v[i].opt[3]);
    }*/
    //shakersortReverse(v,5000,&c,&m);
    //printf("Studentii ordonati invers alfabetic:\n");
    /*for(int i = 0;i<N;i++){
        printf("%s",v[i].nume);
        printf("%s %s %s %s\n\n", v[i].opt[0],v[i].opt[1],v[i].opt[2],v[i].opt[3]);
    }*/

    insertsort(v,2);
    for(int i=0; i<4; i++){
        printf("%s ",v[2].opt[i]);
    }


}
