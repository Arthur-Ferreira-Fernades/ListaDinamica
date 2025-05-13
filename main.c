#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{
    int x;
    int matricula = 120, posicao = 2;
    ALUNO aluno_consulta, aluno1, aluno2, aluno3;

    aluno1.matricula = 110;
    aluno1.nota1 = 5.6;
    aluno1.nota2 = 6.3;
    aluno1.nota3 = 7.9;

    aluno2.matricula = 130;
    aluno2.nota1 = 9.6;
    aluno2.nota2 = 3.3;
    aluno2.nota3 = 8.9;

    aluno3.matricula = 120;
    aluno3.nota1 = 6.6;
    aluno3.nota2 = 2.3;
    aluno3.nota3 = 9.9;

    Lista *li = NULL;

    if ((li = criaLista()) == NULL) {
        abortaPrograma();
    }

    if (listaCheia(li)) {
        printf("\nLista esta cheia");
    } else {
        printf("\nLista nao cheia");
    }

    x = insereInicio(li, aluno1);
    if (x) {
        printf ("\nAluno %d inserido no inicio com sucesso!", x);
    } else {
        printf("\nNao foi possivel inserir no inicio");
    }

    x = insereFinal(li, aluno2);
    if (x) {
        printf ("\nAluno %d inserido no final com sucesso!", x);
    } else {
        printf("\nNao foi possivel inserir no final");
    }

    x = insereOrdenado(li, aluno3);
    if (x) {
        printf("\nAluno %d inserido ordenadamente com sucesso!", x);
    } else {
        printf("\nNao foi possivel inserir ordenadamente!");
    }

    x = tamanhoLista(li);
    printf("\nO tamanho da lista e: %d", x);

    if (listaVazia(li)) {
        printf ("\nLista esta vazia");
    } else {
        printf ("\nLista nao esta vazia");
    }

    x = consultaPosicao(li, posicao, &aluno_consulta);
    if (x) {
        printf("\n\nConsulta na posicao %d", posicao);
        printf("\nMatricula:    %d", aluno_consulta.matricula);
        printf("\nNota 1:   %.2f", aluno_consulta.nota1);
        printf("\nNota 2:   %.2f", aluno_consulta.nota2);
        printf("\nNota 3:   %.2f", aluno_consulta.nota3);
    } else {
        printf("\nPosicao %d nao existe.", posicao);
    }

    x = consultaMatricula(li, matricula, &aluno_consulta);
    if (x) {
        printf("\n\nConsulta aluno matriculado");
        printf("\nMatricula:    %d", aluno_consulta.matricula);
        printf("\nNota 1:   %.2f", aluno_consulta.nota1);
        printf("\nNota 2:   %.2f", aluno_consulta.nota2);
        printf("\nNota 3:   %.2f\n", aluno_consulta.nota3);
    } else {
        printf("\nPosicao %d nao existe.", posicao);
    }

    x = removeInicio(li);
    if (x) {
        printf("\nAluno %d removido do inicio com sucesso!", x);
    } else {
        printf("\nNao foi possivel remover do inicio");
    }

    x = removeFinal(li);
    if (x) {
        printf("\nAluno %d removido do final com sucesso!", x);
    } else {
        printf("\nNao foi possivel remover do final");
    }

    x = removeOrdenado(li, matricula);
    if (x) {
        printf("\nAluno %d removido ordenadamente com sucesso!", x);
    } else {
        printf("\nNao foi possivel remover o aluno");
    }

    x = tamanhoLista(li);
    printf("\nO tamanho da lista e: %d", x);

}
