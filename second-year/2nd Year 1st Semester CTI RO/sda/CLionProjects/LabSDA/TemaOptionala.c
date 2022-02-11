#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOURCE_SIZE 1024
#define PATTERN_SIZE 1024

void preKMP(char* pattern, int pattern_length, int* kmpNEXT)
{
    int len = 0;

    kmpNEXT[0] = 0;

    int i = 1;
    while (i < pattern_length) {
        if (pattern[i] == pattern[len]) {
            len++;
            kmpNEXT[i] = len;
            i++;
        }
        else
        {
            if (len != 0) {
                len = kmpNEXT[len - 1];
            }
            else
            {
                kmpNEXT[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(char* pattern, char* source)
{
    int patternLength = strlen(pattern);
    int sourceLength = strlen(source);

    int kmpNext[patternLength];

    preKMP(pattern, patternLength, kmpNext);

    int i = 0;
    int j = 0;
    while (i < sourceLength) {
        if (pattern[j] == source[i]) {
            j++;
            i++;
        }

        if (j == patternLength) {
            printf("Patternul este gasit la indexul %d\n", i - j);
            j = kmpNext[j - 1];
        }
        else if (i < sourceLength && pattern[j] != source[i]) {
            if (j != 0)
                j = kmpNext[j - 1];
            else
                i = i + 1;
        }
    }
}

int main() {

    // declarare string-uri pentru sursa si pattern
    char source[SOURCE_SIZE];
    char pattern[PATTERN_SIZE];

    // deschidere fisier si citirea sursei din fisier
    FILE *f;
    f = fopen("Sursa.txt","r");
    if(!f){
        printf("Eroare la deschiderea fisierului!");
        exit(EXIT_FAILURE);
    }
    fgets(source, SOURCE_SIZE,f);
    fclose(f);

    // citire pattern de la tastatura
    printf("pattern:");
    gets(pattern);

    // Afisare index pattern
    KMPSearch(pattern,source);

}

