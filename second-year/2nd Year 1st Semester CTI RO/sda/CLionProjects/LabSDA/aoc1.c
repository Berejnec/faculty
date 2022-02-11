#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    FILE *file;
    file = fopen("input1.txt","r");
    if(!file) {
        printf("File error");
        exit(EXIT_FAILURE);
    }
    char firstLine[256], line[20];
    int counter = 0;
    char array[256][2000];
    int i = 0;
    while(fgets(line,sizeof(line),file)){
        strcpy(array[i],line);
        i++;
    }
    printf("%s", array[2]);
//    for(int i = 1; i<2000; i++){
//        if(array[i] > array[i-1]){
//            counter++;
//        }
//    }
//    printf("%d", counter);
}
