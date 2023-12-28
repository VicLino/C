#include <stdio.h>
#include <stdbool.h>

struct dicionario{
    char palavra[20];
    char definicao[50];
};

bool comparaStrings(const char palavra1[], const char palavra2[])  {
    
    int i = 0;

    while (palavra1[i] == palavra2[i]
    && palavra1[i] != '\0'
    && palavra2[i] != '\0')  {
        i++;
    }

    if(palavra1[i] == '\0' && palavra2[i] == '\0')  {

        return true;
    } else{
        return false;
    }

}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras)  {

    bool comparaStrings(const char palavra1[], const char palavra2[]);
    int i = 0;

    while (i < numDePalavras)  {

        if (comparaStrings(procurar, lingua[i].palavra))  {

            return i;
        } else {
            ++i;
        }
    }
    return -1;
}

int main(void)  {
    
    int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

    const int NUMERODEDEFINICOES = 7;
    char palavras[20] = {'\0'};
    int resultadoPesquisa;

    const struct dicionario portugues[7] = 
       {{"pao", "comida de farinha"},
        {"mortandela", "resto de porco"},
        {"feijao", "comida brasileira"},
        {"tropeiro", "tipo de feijao"},
        {"queijo", "de minas"},
        {"macarronada", "tipo de vo"},
        {"pizza", "tipico da italia"}};

    printf("Digite uma palavra: ");
    scanf("%s", palavras);

    resultadoPesquisa = procurarStrings(portugues, palavras, NUMERODEDEFINICOES);

    if (resultadoPesquisa != -1)  {
        printf("%s\n", portugues[resultadoPesquisa].definicao);

    } else {

        printf("Palavra nao encontrada\n");
    }

    return 0;
}