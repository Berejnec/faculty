#include <stdio.h>
int N;
void coloreaza_harta(int matrix[N][N]) {
    int i,j;
    int culoare; // 1 = rosu; 2 = galben; 3 = verde; 4 = mov
    for(i = 0; i < N; i++){
        culoare = 1;
        for(j = 0; j < N; j++){
            matrix[i][j] = culoare;
            culoare++;
        }
    }
}

int main() {
    int matrix[5][5];
    coloreaza_harta(matrix);
    for(int i = 0 ; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
