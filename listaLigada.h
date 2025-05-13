typedef struct aluno {
    int matricula;
    float nota1, nota2, nota3;
}ALUNO;

typedef struct elemento* Lista;

Lista *criaLista();

void abortaLista();

int tamanhoLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insereInicio(Lista *li,ALUNO al);

int insereFinal(Lista *li, ALUNO al);

int insereOrdenado (Lista *li, ALUNO al);

int removeInicio(Lista *li);

int removeFinal(Lista *li);

int removeOrdenado(Lista *li, int mat);

int consultaPosicao(Lista *li, int posicao, ALUNO *al);

int consultaMatricula(Lista *li, int mat, ALUNO *al);

void apagaLista (Lista *li);
