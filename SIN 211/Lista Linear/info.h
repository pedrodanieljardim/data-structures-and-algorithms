/*
    Prototipação das funções do programa listaLinear....

*/

#define MAX 100
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct lista Lista;

Lista *li;

Lista* criaLista();

void liberaLista(Lista *li);

int tamanhoLista(Lista* li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insereFinalLista(Lista *li,struct aluno al);

int insereInicioLista(Lista *li,struct aluno al);

int insereListaOrdenada(Lista *li,struct aluno al);

int removeFinalLista(Lista *li);

int removeInicioLista(Lista *li);

int removeMeioLista(Lista *li,int n);