#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char culori[][10] = {"alb", "galben", "rosu", "verde", "albastru", "negru"};
char sol[][10];

int solutie(int k){
    if(k == 3)
        return 1;

    return 0;
}

void afisare(int k){
    for(int i=0; i<k; i++)
        printf("%s ", sol[i]);
    printf("\n");
}

int valid(int k){
    for(int i=0; i<k; i++)
        if(strcmp(sol[k], sol[i])==0)
            return 0;

    if(k>=2)
        return strcmp(sol[1], "galben")==0 || strcmp(sol[1], "verde")==0;

  return 1;
}

void back(int k){
    for(int i=0; i<6; i++){
        strcpy(sol[k], culori[i]);
        if(valid(k)){
            if(solutie(k))
                afisare(k);
            else
                back(k+1);
        }
    }
    strcpy(sol[k], "\n");
}

int main()
{
    back(0);
    return 0;
}
