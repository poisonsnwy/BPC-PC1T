#include <stdio.h>
#include <ctype.h>

void howManyLetters(char* text) {
    int amountOfLetters = 0;
    for (int a = 0; text[a] != '\0'; a++) {
        if (isalpha(text[a])) {
            amountOfLetters++;
        }
    }
    printf("You have %d letters.\n", amountOfLetters);
}

void howManyNumbers(char* text) {
    int amountOfDigits = 0;
    for (int a = 0; text[a] != '\0'; a++) {
        if (isdigit(text[a])) {
            amountOfDigits++;
        }
    }
    printf("You have %d digits.\n", amountOfDigits);
}

int wordsLenghts(char* text, int* delky) {
    int delka = 0;         
    int pocetSlov = 0;     

    for (int a = 0; text[a] != '\0'; a++) {
        if (isalpha(text[a]) || isdigit(text[a])) {
            delka++;
        }
        else if (delka > 0) {
            delky[pocetSlov] = delka;
            pocetSlov++;
            delka = 0;
        }
    }

    

    if (delka > 0) {
        delky[pocetSlov] = delka;
        pocetSlov++;
    }

    printf("Word lengths: ");
    for (int i = 0; i < pocetSlov; i++) {
        printf("%d ", delky[i]);
    }
    printf("\n");

    return pocetSlov;
}

int main() {
    char text[] = "Toto jsou 2 vzorcove vety, ktere budou zpracovany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

    howManyLetters(text);
    howManyNumbers(text);

    int JednotliveDelky[100];
    int pocetSlov = wordsLenghts(text, JednotliveDelky);

    printf("There are %d words.\n", pocetSlov);

    return 0;
}