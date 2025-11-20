#include <stdio.h>
#include <ctype.h>

int main() {
    FILE* fvstup = fopen("D:/283144/rep/cv10/cv10/vstup.txt", "r");
    int letters = 0;
    int digits = 0;
    int ch;
    char hledany;
    printf("Zadejte libovolny znak: ");
    scanf("%c", &hledany);
    int pocet = 0;

    while ((ch = fgetc(fvstup)) != EOF) {
        if (isalpha(ch)) letters++;
        if (isdigit(ch)) digits++;
        if (ch == hledany) pocet++;
    }
    fclose(fvstup);
    FILE* fvys = fopen("D:/283144/rep/cv10/cv10/vysledek.txt", "w");
    fprintf(fvys, "Letters: %d\nDigits: %d\nHledany znak: %d\n", letters, digits, pocet);
    fclose(fvys);
    printf("Letters: %d\nDigits: %d\nHledany znak: %d\n", letters, digits, pocet);
    return 0;
}
