
#include <stdio.h>

int main(void){

    void concatenarStrings(char string1[], int t1,
                           char string2[], int t2,
                           char string3[], int t3,
                           char string4[], int t4,
                           char string5[], int t5,
                           char string6[]);
    char palavra1[] = {'E','U',' '};
    char palavra2[] = {'S','O','U',' '};
    char palavra3[] = {'P','I','C','A',' '};
    char palavra4[] = {'P','R','A',' '};
    char palavra5[] = {'C','A','R','A','L','H','O'};
    char novaPalavra[23];

    concatenarStrings(palavra1, 3, palavra2, 4, palavra3, 5, palavra4, 4, palavra5, 7, novaPalavra);

    for (int i = 0; i < 23; i++) {
        printf("%c", novaPalavra[i]);
    }
    printf("\n");

    return 0;
}

void concatenarStrings(char string1[], int t1,
                       char string2[], int t2, 
                       char string3[], int t3,
                       char string4[], int t4,
                       char string5[], int t5,
                       char string6[])  {
    int i, j, k, l, m;

    for (i = 0; i < t1; ++i)  {
        string6[i] = string1[i];
    }

    for (j = 0; j < t2; ++j)  {
        string6[t1 + j] = string2[j];
    }

    for (k = 0; k < t3; ++k)  {
        string6[t1 + t2 + k] = string3[k];
    }

    for (l = 0; l < t4; ++l)  {
        string6[t1 + t2 + t3 + l] = string4[l];
    }

    for (m = 0; m < t5; ++m)  {
        string6[t1 + t2 + t3 + t4 + m] = string5[m];
    }
}