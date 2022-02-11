#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char culori[][10] = {"alb", "roz", "verde", "albastru"};

int sol[3][3];
int n = 3, m = 3;

int valid(int k1, int k2){
    if(k1-1>=0 && k2-1>=0)
        if(sol[k1-1][k2-1]==sol[k1][k2])
            return 0;

    if(k1-1>=0 && k2+1<m)
        if(sol[k1-1][k2+1]==sol[k1][k2])
            return 0;

     if(k1+1<n && k2-1>=0)
        if(sol[k1+1][k2-1]==sol[k1][k2])
            return 0;

    if(k1+1<n && k2+1<m)
        if(sol[k1+1][k2+1]==sol[k1][k2])
            return 0;

    return 1;
}

int solutie(int k1, int k2){
    if(k1==n-1 && k2==m-1)
        return 1;

    return 0;
}

void afisare(int k1, int k2){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
           printf("%s ", culori[sol[i][j]]);

        printf("\n");
    }
    printf("\n");
}

int gasit = 0;

void back(int k1, int k2){
    for(int i=0; i<4 ; i++){
        sol[k1][k2] = i;

        if(valid(k1, k2))
            if(solutie(k1, k2)) {
             afisare(k1, k2);

            }
            else{
                if(k1==n-1)
                    back(0, k2+1);

                back(k1+1, k2);
            }
    }
    sol[k1][k2] = -1;
}

int main()
{
    back(0, 0);
    return 0;
}
