#include <stdio.h>
#include <string.h>

char MUST[50];
int NR_PAROLE_GENERATE = 0;
char ENCODED_PASS[50];
int indexEncoded = 0;

int validPassword(char *PASS) {
    int ok;

    for(int i = 0; i < strlen(MUST); i++) {
        ok = -1;
        for(int j = 0; j < strlen(PASS); j++) {
            if(MUST[i] == PASS[j]) {
                ok = 1;
                break;
            }
        }
        if(ok == -1) {
            return 0;
        }
    }
    return 1;
}

void generatePasswords(char *PASS, char *ALF, int N, int length) {
    if(validPassword(PASS) && length == N) {
        NR_PAROLE_GENERATE++;
    }
    else if (length < N) {
        char k;
        for(int i = 0 ; i < strlen(ALF); i++) {
            k = ALF[i];
            PASS[length] = k;
            generatePasswords(PASS, ALF, N, length + 1);
        }
    }
}

void KryptKat(char *PASS, int left, int right) {
    int middle;
    if(left > right) {
        return;
    }
    int length = right - left + 1;
    if(length % 2 == 0) {
        middle = (left + right) / 2 + 1;
    } else {
        middle = (left + right) / 2;
    }
//    printf("%c", PASS[middle]);
    ENCODED_PASS[indexEncoded] = PASS[middle];
    indexEncoded++;
    KryptKat(PASS, left, middle - 1);
    KryptKat(PASS, middle + 1, right);
}

int main() {
    char ALF[50];
    char PASS[50];
    char PASSWORDS[50];
    int N;

    scanf("%d", &N);
    scanf("%s", ALF);
    scanf("%s", MUST);
    scanf("%s", PASS);

    generatePasswords(PASSWORDS, ALF, N, 0); // generarea tuturor parolelor dupa reguli
    printf("%d\n", NR_PAROLE_GENERATE); // nr de parole generate

    KryptKat(PASS, 0, strlen(PASS) - 1); // criptare parola PASS
    printf("%s", ENCODED_PASS);
}