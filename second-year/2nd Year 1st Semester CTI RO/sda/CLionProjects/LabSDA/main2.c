#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5000
FILE *file;

typedef struct{
    char nume[35];
    float medie;
}Student;
Student v[MAX];
void SelSort(Student v[], int n){
    int i,j,min;
    Student temp;
    for(i = 0 ;i <= n-2; i++){
        min = i;
        temp = v[i];
        for(j=i+1;j<n;j++)
            if(v[j].medie < temp.medie){
                min = j;
                temp = v[j];
            }
        v[min] = v[i];
            v[i] = temp;
    }

}
void BubbleSort(Student v[],int n){
    int i,j;
    Student temp;
    for(i = 0;i<n;i++){
        for(j=n-1;j>i;j--)
            if(strcmp((v[j-1].nume),v[j].nume) > 0){
                temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
    }
}
int main(){

    file = fopen("Studenti2.txt","r");
    if(file == NULL){
        printf("Eroare la deschiderea fisierului!");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while(!feof(file)){
        fgets(v[i].nume,35,file);
        fscanf(file,"%f\n", &v[i].medie);
        i++;
    }
    SelSort(v,MAX);
    for(int j = 0; j<MAX;j++){
        printf("%s %f\n",v[j].nume,v[j].medie);
    }
    BubbleSort(v,MAX);
    for(int j = 0; j<MAX;j++){
        printf("%s %f\n",v[j].nume,v[j].medie);
    }



}
