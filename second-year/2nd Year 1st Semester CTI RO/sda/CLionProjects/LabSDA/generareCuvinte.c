#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[11];
char M[3] = { 'a','b','c' };
int contor_afisare = 0;

void afiseaza_solutia()
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%c ", a[i]);
    printf("\n");
}

int acceptabil(char aux, int k)
{
    int contor[100], i;
    for(i = 0; i < 3; i++)
        contor[M[i]] = 0;
    for (i = 0; i < k; i++)
        contor[a[i]]++;
    contor[aux]++;
    if (contor['a'] > 3 || contor['b'] > 4 || contor['c'] > 3)
        return 0;
    return 1;
}

int solutie(int k)
{
    return (k == 10);
}

void back(int k)
{
    int i;
    char aux;
    if (solutie(k) && contor_afisare < 5){
        afiseaza_solutia();
        contor_afisare++;
    }
    else
        for (i = 0; i < 3; i++)
        {
            aux = M[i];
            if (acceptabil(aux, k))
            {
                a[k] = M[i];
                back(k + 1);
            }
        }
}

int main(void)
{
    back(0);
}